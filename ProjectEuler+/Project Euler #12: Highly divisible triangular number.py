t = int(input())

for a0 in range(t):
    n = int(input())
    
    a=1
    
    while True:
        count = 0
        term = a*(a+1)//2
        
        for i in range(1,(int(term**0.5)+1)):
            if term%i == 0:
                count += 2
                if i*i == term:
                    count -= 1
                    
        if count>n:
            break
                
        a+=1
        
    print(term)
