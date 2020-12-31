from PIL import Image
import sys
import struct
import re
import os
def decode(im):
    try:
        setting=open(r".\setting.ini", mode='r')
    except FileNotFoundError:
        new_setting=open(r".\setting.ini", mode='w')
        new_setting.write("null_range=<start>5000<end>\n")
        new_setting.close()
        setting=open(r".\setting.ini", mode='r')
    null_range=int(re.match( r"null_range=<start>(.*?)<end>\n",setting.read(),re.M|re.I).group(1))
    setting.close()
    w,h=im.size
    lst=[]
    i=0
    fourth=0
    null_data=0
    print("R\tG\tB\t%")
    for y in range(h):
        for x in range(w):
            i+=1
            r,g,b=im.getpixel((x,y))
            if (r|g|b)==0:
                null_data+=1.5
            if null_data > null_range:
                if (r|g|b)!=0:
                    null_data=0
                else:
                    break
            if (i%2)==0:
                lst.append((r<<8)+g)
                fourth=b
            else:
                lst.append((fourth<<8)+r)
                lst.append((g<<8)+b)
                fourth=0
            print(r,"\t",g,"\t",b)
    return lst
if __name__=='__main__':
    a_t=decode(Image.open(sys.argv[1],"r"))
    the_eval="struct.pack(\">"
    the_eval_1="\""
    for i in a_t:
        if i > 255:
            the_eval=the_eval+"H"
        else:
            the_eval=the_eval+"B"
        the_eval_1=the_eval_1+","+str(i)
    the_bin=eval(the_eval+the_eval_1+")")
    try:
        name=sys.argv[2]
    except IndexError:
        name="output.txt"
    with open(name,"wb")as f:
        f.write(the_bin)
        #,encoding="utf-8"
        #chr((g<<8)+b)