module RX 
		
		(
		input        i_Clock,
		input        i_Rx_Serial,
		output       o_Rx_DV,
		output [7:0] o_Rx_Byte
		);
	parameter CLKS_PER_BIT=1;
	parameter s_IDLE         = 3'b000;
	parameter s_RX_START_BIT = 3'b001;
	parameter s_RX_DATA_BITS = 3'b010;
	parameter s_RX_STOP_BIT  = 3'b011;
	parameter s_CLEANUP      = 3'b100;
   
	reg           r_Rx_Data_R = 1'b1;
	reg           r_Rx_Data   = 1'b1;
   
	reg [7:0]     r_Clock_Count = 0;
	reg [2:0]     r_Bit_Index   = 0; //8 bits total
	reg [7:0]     r_Rx_Byte     = 0;
	reg           r_Rx_DV       = 0;
	reg [2:0]     r_SM_Main     = 0;
   
	// Purpose: Double-register the incoming data.
	// This allows it to be used in the UART RX Clock Domain.
	// (It removes problems caused by metastability)
	always @(posedge i_Clock)
	begin
		r_Rx_Data_R <= i_Rx_Serial;
		r_Rx_Data   <= r_Rx_Data_R;
	end
   
   
	// Purpose: Control RX state machine
	always @(posedge i_Clock)
	begin
       
		case (r_SM_Main)
			s_IDLE :
			begin
				r_Rx_DV       <= 1'b0;
				r_Clock_Count <= 0;
				r_Bit_Index   <= 0;
             
				if (r_Rx_Data == 1'b0)          // Start bit detected
					r_SM_Main <= s_RX_START_BIT;
				else
					r_SM_Main <= s_IDLE;
			end
         
			// Check middle of start bit to make sure it's still low
			s_RX_START_BIT :
			begin
				if (r_Clock_Count == (CLKS_PER_BIT-1)/2)
				begin
					if (r_Rx_Data == 1'b0)
					begin
						r_Clock_Count <= 0;  // reset counter, found the middle
						r_SM_Main     <= s_RX_DATA_BITS;
					end
					else
						r_SM_Main <= s_IDLE;
				end
				else
				begin
					r_Clock_Count <= r_Clock_Count + 1;
					r_SM_Main     <= s_RX_START_BIT;
				end
			end // case: s_RX_START_BIT
         
         
			// Wait CLKS_PER_BIT-1 clock cycles to sample serial data
			s_RX_DATA_BITS :
			begin
				if (r_Clock_Count < CLKS_PER_BIT-1)
				begin
					r_Clock_Count <= r_Clock_Count + 1;
					r_SM_Main     <= s_RX_DATA_BITS;
				end
				else
				begin
					r_Clock_Count          <= 0;
					r_Rx_Byte[r_Bit_Index] <= r_Rx_Data;
                 
					// Check if we have received all bits
					if (r_Bit_Index < 7)
					begin
						r_Bit_Index <= r_Bit_Index + 1;
						r_SM_Main   <= s_RX_DATA_BITS;
					end
					else
					begin
						r_Bit_Index <= 0;
						r_SM_Main   <= s_RX_STOP_BIT;
					end
				end
			end // case: s_RX_DATA_BITS
     
     
			// Receive Stop bit.  Stop bit = 1
			s_RX_STOP_BIT :
			begin
				// Wait CLKS_PER_BIT-1 clock cycles for Stop bit to finish
				if (r_Clock_Count < CLKS_PER_BIT-1)
				begin
					r_Clock_Count <= r_Clock_Count + 1;
					r_SM_Main     <= s_RX_STOP_BIT;
				end
				else
				begin
					r_Rx_DV       <= 1'b1;
					r_Clock_Count <= 0;
					r_SM_Main     <= s_CLEANUP;
				end
			end // case: s_RX_STOP_BIT
     
         
			// Stay here 1 clock
			s_CLEANUP :
			begin
				r_SM_Main <= s_IDLE;
				r_Rx_DV   <= 1'b0;
			end
         
         
			default :
				r_SM_Main <= s_IDLE;
         
		endcase
	end   
   
	assign o_Rx_DV   = r_Rx_DV;
	assign o_Rx_Byte = r_Rx_Byte;
   
endmodule // uart_rx*/

/*
 *  PicoSoC - A simple example SoC using PicoRV32
 *
 *  Copyright (C) 2017  Clifford Wolf <clifford@clifford.at>
 *
 *  Permission to use, copy, modify, and/or distribute this software for any
 *  purpose with or without fee is hereby granted, provided that the above
 *  copyright notice and this permission notice appear in all copies.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 

/*module RX (
		input clk,
		input resetn,
		input  ser_rx,
		input  [31:0] cfg_divider,
		output [7:0]  data,
		output 	reg   valid
		);

	reg [3:0] recv_state;
	reg [31:0] recv_divcnt;
	reg [7:0] recv_pattern;
	reg [7:0] recv_buf_data;

	//assign data = valid ? recv_buf_data : ~0;
	assign data =  recv_buf_data ;
	always @(posedge clk) begin
		if (!resetn) begin
			recv_state <= 0;
			recv_divcnt <= 0;
			recv_pattern <= 0;
			recv_buf_data <= 0;
			valid <= 0;			
		end else begin
			recv_divcnt <= recv_divcnt + 1;
			
			valid <= 0;

			case (recv_state)
				0: begin
					if (!ser_rx)
						recv_state <= 1;
					recv_divcnt <= 0;
				end
				1: begin
					if (2*recv_divcnt > cfg_divider) begin
						recv_state <= 2;
						recv_divcnt <= 0;
					end
				end
				10: begin
					if (recv_divcnt > cfg_divider) begin
						recv_buf_data <= recv_pattern;
						valid <= 1;
						recv_state <= 0;
					end
				end
				default: begin
					if (recv_divcnt > cfg_divider) begin
						recv_pattern <= {ser_rx, recv_pattern[7:1]};
						recv_state <= recv_state + 1;
						recv_divcnt <= 0;
					end
				end
			endcase
		end
	end
endmodule*/