import serial 
from PIL import Image

def writePix(data0,data1,addr): 
           
          ser.write(b'\xAF')
          #ser.flush()         
         # s=ser.read(1)
          #if s==b'\xaf':
           # print("ram_seq_start")      
          ser.write(((addr)[2].to_bytes(1,byteorder='big')))
          #print(((addr)[2].to_bytes(1,byteorder='big')))
          #ser.flush()
          #s=ser.read(1)
          #if s==b'\x10':
          #  print("add0")  
          ser.write(((addr)[1].to_bytes(1,byteorder='big')))
          #print(((addr)[1].to_bytes(1,byteorder='big')))
          #ser.flush()
          #s=ser.read(1)
          #if s==b'\x11':
          #  print("add1") 
          ser.write(((addr)[0].to_bytes(1,byteorder='big')))
          #print(((addr)[0].to_bytes(1,byteorder='big')))
          #ser.flush()
          #s=ser.read(1)
          #if s==b'\x12':
          #  print("add2") 
          ser.write(data0)
         # ser.flush()
         # s=ser.read(1)
          #if s==b'\x13':
          #  print("red") 
          ser.write(data1) 
         # ser.flush()        
         # s=ser.read(1)
          #print(s)
          #if s==b'\x14':
          #  print("green")           
          ser.write(b'\xA1') 
          #ser.flush()        
          #s=ser.read(1)
          #if s==b'\xa1':
           # print("ram_sequence over")
            
def readPix(addr):        
         ser.write(b'\x22')         
         s=ser.read(1)
         #if s==b'\x23':
          #  print("read0")       
         ser.write(((addr)[2].to_bytes(1,byteorder='big')))         
         s=ser.read(1)
         #if s==b'\x24':
          #  print("add0")
        
         ser.write(((addr)[1].to_bytes(1,byteorder='big')))         
         s=ser.read(1)
         #if s==b'\x25':
           # print("add1")
        
         ser.write(((addr)[0].to_bytes(1,byteorder='big')))         
         s=ser.read(1)
        # if s==b'\x26':
          #  print("add2")
        
         ser.write(b'\x27')         
         s=ser.read(1)          
         #print(s)
        
         ser.write(b'\x28')         
         g=ser.read(1)         
         #print(s)
         return(s,g)    
                 


#ser=serial.Serial('/dev/ttyUSB0')
ser=serial.Serial('/dev/ttyUSB0',115200)
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
          #s=ser.read(1)
         # if s==b'\x04':
           # print("device reset")
            
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
            writePix(b'\xab',b'\xcd',(0).to_bytes(3,byteorder='big'))
            
        case "wr_ima":
            im=Image.open("Sbahn.png")
            pix=im.load()
            print(im.size)           
            for a in range(720):
                for b in range(1280):
                    #data0=((pix[b,a][0]).to_bytes(1,byteorder='big')&b'11110000')|((((pix[b,a][2]).to_bytes(1,byteorder='big'))>>2)&b'00001111')
                    data0=(((pix[b,a][0])&240)|((pix[b,a][2])>>4)).to_bytes(1,byteorder='big')
                    data1= (pix[b,a][1]).to_bytes(1,byteorder='big')
                    #print(data0)
                    #print(data1) 
                   # print((a*1280+b).to_bytes(3,byteorder='big'))   
                    #data0=b'\x00'
                    #data1=b'\x00'                         
                    writePix(data0,data1,(a*1280+b).to_bytes(3,byteorder='big')) 
                    print(a*1280+b)
                    
        case "read_ima":
            im=Image.open("ULX3S.png")
            pix=im.load()
            print(im.size)    
            count=0       
            for a in range(720):
                for b in range(1280):
                    #data0=((pix[b,a][0]).to_bytes(1,byteorder='big')&b'11110000')|((((pix[b,a][2]).to_bytes(1,byteorder='big'))>>2)&b'00001111')
                    data0=(((pix[b,a][0])&240)|((pix[b,a][2])>>4)).to_bytes(1,byteorder='big')
                    data1= (pix[b,a][1]).to_bytes(1,byteorder='big')
                    #print(data0)
                    #print(data1) 
                   # print((a*1280+b).to_bytes(3,byteorder='big'))   
                    #data0=b'\x00'
                    #data1=b'\x00'                         
                    c,d=readPix((a*1280+b).to_bytes(3,byteorder='big')) 
                    print(a*1280+b)
                    if(data0==c and data1==d):
                        print("yes")
                    else:
                        count=count+1
                        print("no")
                        #print(data0)
                        #print(c)
                        #print(data1)
                        #print(d)
                    print(count)                        
        
            
        case "wr_pix1":
            writePix(b'\xaa',b'\xbb',(0).to_bytes(3,byteorder='big'))            
        case "wr_pix2":
            writePix(b'\xcc',b'\xdd',(1).to_bytes(3,byteorder='big'))    
        case "wr_pix3":
            writePix(b'\xee',b'\xff',(2).to_bytes(3,byteorder='big')) 
            
        case "read_pix":
            readPix((0).to_bytes(3,byteorder='big'))
            readPix((1).to_bytes(3,byteorder='big'))         
            readPix((2).to_bytes(3,byteorder='big'))  
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
            
            
        
             
              

               
           
    
    

