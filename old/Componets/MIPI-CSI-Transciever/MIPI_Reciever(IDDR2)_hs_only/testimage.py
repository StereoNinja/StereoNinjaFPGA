from PIL import Image
import numpy as np


path='640x480.png'
image=Image.open(path)
pix_arr=np.array(image.convert('L'))
x,y =image.size

print(pix_arr)
data=''
with open('testimage.mem','w') as file:
    for y1 in range(y):
        for x1 in range(x):
            data=(''+hex(pix_arr[y1,x1]).replace('0x','').zfill(2))+data
            if((x1+1)%4==0):
                file.write(data+'\n')
                data=''

        
