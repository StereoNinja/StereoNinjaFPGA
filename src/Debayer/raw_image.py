from PIL import Image
import numpy as np


path='src/Debayer/image.png'
image=Image.open(path)
pix_arr=np.array(image)
x,y =image.size

red=np.zeros((480,640,3),dtype=np.uint8)
green=np.zeros((480,640,3),dtype=np.uint8)
blue=np.zeros((480,640,3),dtype=np.uint8)

raw=np.zeros((480,640),dtype=np.uint8)

print(pix_arr)
for b in range(480):    
    for a in range(640):
        if a%2==0:
            if b%2==0:                
                green[b,a,1]=pix_arr[b,a][1]                             
            else:  
                red[b,a,0]=pix_arr[b,a][0]                
        else:
            if b%2==0:                
                blue[b,a,2]=pix_arr[b,a][2]
            else:                
                green[b,a,1]=pix_arr[b,a][1]

for b in range(480):    
    for a in range(640):
      raw[b,a]=(red[b,a,0]+green[b,a,1]+blue[b,a,2])
      


img=Image.new('L',(raw.shape[1],raw.shape[0]))
img.putdata(raw.flatten())
img.save('src/Debayer/raw.png')

line=np.zeros((640),dtype=np.uint8)

raw_img=open('src/Debayer/raw.ppm','w')
raw_img.write('P3\n')
raw_img.write('640\n')
raw_img.write('480\n')
raw_img.write('255\n')

for b in range(480):    
    for a in range(640):
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
    raw_img.write('')

raw_img=open('src/Debayer/raw2.ppm','w')
raw_img.write('P3\n')
raw_img.write('640\n')
raw_img.write('480\n')
raw_img.write('255\n')

for b in range(480):    
    for a in range(640):
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
      raw_img.write(str(raw[b,a]).zfill(3)+' ')
    raw_img.write('\n')
    
    



                


        
