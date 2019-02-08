t = int(input())
while t!=0:
    n = int(input())
    a = list(map(int,input().split()))
    minimum=0
    for i in range(n):
        minimum += (a[i]-1)
    print(minimum+1)
    
