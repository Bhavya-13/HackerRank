#!/bin/python3

import sys
import string



t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()
    
    b= str(num)
    length = len(b)
    a=str(num)
    templastindex=0
    i=0
    
    largestmultiple=0
    
    while i+k<len(b):
        multiple = 1
        sections = b[i:i+k]
        for digits in sections:
            multiple *= int(digits)
        if multiple>largestmultiple:
            largestmultiple=multiple
            
        
        i=i+1
            
    print(largestmultiple)
        
    
