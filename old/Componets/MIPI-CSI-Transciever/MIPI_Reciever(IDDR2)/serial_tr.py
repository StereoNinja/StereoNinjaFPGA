import serial 
from PIL import Image
import numpy as np
import csv


arr=np.zeros((480,640))
ser=serial.Serial('/dev/ttyUSB0',115200)
print(ser.name)
   
state=0
addr0=0
addr1=0
addr2=0
data=0
addr=0
for a in range(308200*5):  
  s=ser.read(1)
  print(s)
  if(state==0):
    if(s==b'\xaa'):
      state=1;     
  elif(state==1):
    addr0=(s)
    state=2
  elif(state==2):
    addr1=(s)
    state=3
  elif(state==3):
    addr2=(s)
    state=4
  elif(state==4):
    addr=int.from_bytes(addr2+addr1+addr0,'big')
    print('Adress:'+str(addr))
    data=ord(s)
    print('Wert: '+str(data))
    state=0  
    arr[addr//640,addr%640]=data
  if(a%1000==0):
    img=Image.new('L',(arr.shape[1],arr.shape[0]))
    img.putdata(arr.flatten())
    img.save('bild.png')
print(arr)
with open('image.csv','w', newline='') as csvfile:
  writer=csv.writer(csvfile)
  for row in arr:
    writer.writerow(row)
#ser.write(((addr)[2].to_bytes(1,byteorder='big'))