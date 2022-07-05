#!/usr/bin/python3
def uppercase(str):
    for x in range(len(str)):
        upper = str[x]
        if ord(str[x]) > 96 and ord(str[x]) < 123:
            upper = chr(ord(str[i]) - 32)
         print("{}".format(upper), end='')
     print()    
