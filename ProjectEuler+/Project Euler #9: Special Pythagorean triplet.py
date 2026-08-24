import sys
import math

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    
    multiple=-1
    
    for a in range(1,n//3):
        b = (n*(n-2*a))//(2*(n-a)) 
        c=n-a-b
            
        if c<=b:
            break
            
        if a*a+b*b==c*c:
            if a*b*c>multiple:
                multiple=a*b*c
    
    print(int(multiple))
