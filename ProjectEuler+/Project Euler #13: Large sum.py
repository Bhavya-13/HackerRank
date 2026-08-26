n = int(input())
total = 0

for _ in range(n):
    total += int(input().strip())
    
print(str(total)[:10])
