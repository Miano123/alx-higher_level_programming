#!/usr/bin/python3
for number in range(0,90):
    if (i % 10 > number / 10):
        if(i != 89):
            print("{:02d}, ".format(i), end="")
        else:
            print("{:02d}".format(i))
