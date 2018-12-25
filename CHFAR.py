t = int(input())
while t!=0:
    n, k = map(int, input().split())
    a = list(map(int,input().split()))
    count = 0
    for i in a:
        if i > 1:
            count = count + 1
    if count <= k:
        print("YES")
    else:
        print("NO")
    t = t-1    
