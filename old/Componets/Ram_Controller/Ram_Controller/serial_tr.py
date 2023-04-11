import serial 

def writePix(data0,data1,addr):    
          ser.write(b'\xAF')
          ser.flush()         
          s=ser.read(1)
          if s==b'\xaf':
            print("ram_seq_start")      
          ser.write(b'\x00')
          ser.flush()
          s=ser.read(1)
          if s==b'\x10':
            print("add0")  
          ser.write(b'\x00')
          ser.flush()
          s=ser.read(1)
          if s==b'\x11':
            print("add1") 
          ser.write(b'\00') 
          ser.flush()
          s=ser.read(1)
          if s==b'\x12':
            print("add2") 
          ser.write(data0)
          ser.flush()
          s=ser.read(1)
          if s==b'\x13':
            print("red") 
          ser.write(data1) 
          ser.flush()
          s=ser.read(1)
          if s==b'\x14':
            print("green")           
          ser.write(b'\xA1') 
          ser.flush()        
          s=ser.read(1)
          if s==b'\xa1':
            print("ram_sequence over") 

#ser=serial.Serial('/dev/ttyUSB0')
ser=serial.Serial('/dev/ttyUSB1',115200)
print(ser.name)
while 1:
    x=input("Eingabe: ")
    match x:
        case "con":
          ser.write(b'\xAA')
          s=ser.read(1)
          if s==b'\x01':
            print("device connected")            
        case "ena":
          ser.write(b'\xAB')
          s=ser.read(1)
          if s==b'\x02':
            print("video enabled")
        case "res":
          ser.write(b'\xA0')
          s=ser.read(1)
          if s==b'\x04':
            print("device reset")
            
        case "ram":
          ser.write(b'\xAC')         
          s=ser.read(1)
          if s==b'\x03':
            print("write ram")
            
        case "ram_h":
          ser.write(b'\xAF')         
          s=ser.read(1)
          if s==b'\xaf':
            print("ram_header")  
            
        case "ram_ad0":
          ser.write(b'\xff')         
          s=ser.read(1)
          
            
        case "ram_ad1":
          ser.write(b'\x01')         
          s=ser.read(1)
         
            
        case "ram_ad2":
          ser.write(b'\02')         
          s=ser.read(1)
          
                 
        case "red":
          ser.write(b'\x03')         
          s=ser.read(1)
          
            
        case "green":
          ser.write(b'\x04')         
          s=ser.read(1)
           
                
        case "blue":
          ser.write(b'\x05')         
          s=ser.read(1)
         
        
        case "ram_s":
          ser.write(b'\xA1')         
          s=ser.read(1)
          if s==b'\xa1':
            print("ram_sequence over")
            
        case "wr_pix":
            writePix(b'\xab',b'\xcd',80)
            
        case "wr_pix2":
            writePix(b'\xef',b'\xfe',80) 
                         
        case "read":
          ser.write(b'\x20')         
          s=ser.read(1)
          if s==b'\x21':
            print("read mode")
        case "read0":
          ser.write(b'\x22')         
          s=ser.read(1)
          if s==b'\x23':
            print("read0")
        case "read1":
          ser.write(b'\x00')         
          s=ser.read(1)
          if s==b'\x24':
            print("add0")
        case "read2":
          ser.write(b'\x00')         
          s=ser.read(1)
          if s==b'\x25':
            print("add1")
        case "read3":
          ser.write(b'\x00')         
          s=ser.read(1)
          if s==b'\x26':
            print("add2")
        case "read4":
          ser.write(b'\x27')         
          s=ser.read(1)          
          print(s)
        case "read5":
          ser.write(b'\x28')         
          s=ser.read(1)         
          print(s)
            
            
        
             
              

               
           
    
    

