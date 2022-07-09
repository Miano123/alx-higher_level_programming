#!/usr/bin/python3

def remove_char_at(str, n):
    x = ""
    for y in range(len(str)):
        if (y != n):
            x = x + str[y]
            return (x)
