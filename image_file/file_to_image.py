from PIL import Image
import math
import sys
def encode(text):
    im=Image.new("RGB",(math.ceil((len(text)/1.5)**0.5),math.ceil((len(text)/1.5)**0.5)),0x0)
    x,y=0,0
    ind=0
    index=0
    rgb=[0,0,0]
    print("R\tG\tB\t%")
    for i in text:
        index+=1
        rgb[ind]=(i)&0xFF
        ind+=1
        if ind==3:
            print(rgb[0],"\t",rgb[1],"\t",rgb[2],"\t",index/len(text)*100,"%")
            im.putpixel((x,y),(rgb[0],rgb[1],rgb[2]))
            rgb=[0,0,0]
            if x==(math.ceil((len(text)/1.5)**0.5))-1:
                x=0
                y+=1
            else:
                x+=1
            ind=0
        rgb[ind]=((i)&0xFF00)>>8
        ind+=1
        if ind==3:
            print(rgb[0],"\t",rgb[1],"\t",rgb[2],"\t",index/len(text)*100,"%")
            im.putpixel((x,y),(rgb[0],rgb[1],rgb[2]))
            rgb=[0,0,0]
            if x==(math.ceil((len(text)/1.5)**0.5))-1:
                x=0
                y+=1
            else:
                x+=1
            ind=0
    if ind==2:
        print(rgb[0],"\t",rgb[1],"\t",0,"\t",index/len(text)*100,"%")
        im.putpixel((x,y),(rgb[0],rgb[1],0))
    if ind==1:
        print(rgb[0],"\t",0,"\t",0,"\t",index/len(text)*100,"%")
        im.putpixel((x,y),(rgb[0],0,0))
    return im
if __name__=='__main__':
    with open(sys.argv[1],"rb")as f:
        the_text = f.read()
    im=encode(the_text)
    try:
        name=sys.argv[2]+".bmp"
    except IndexError:
        name="output.bmp"
    im.save("./"+name)