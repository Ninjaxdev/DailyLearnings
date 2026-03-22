with open("delete.txt",'w') as f:
    f.write("hello guys bal rawat ji ke blog mae apla swagat hai")
    f.writelines("\nbal hm to bhuat sara code likhenge ")
    f.writelines("\n sunn de monu maa kya e monu bolunu bal")

with open("delete.txt",'r') as file:
    text=file.read()
    print(text)

import os
os.remove("delete.txt")