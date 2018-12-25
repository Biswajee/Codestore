t = int(input())
while t!=0:
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    a_rev = list(reversed(a))
    # Pick elements from beginning and end and operate
    sum = 0
    for i in range(int(n/2)):
        sum = sum + abs(a[i] - a_rev[i])
    print(sum)
    t = t-1    
