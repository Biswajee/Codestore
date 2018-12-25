import math
t = int(input())
while t!=0:
    res = 0
    n = int(input())
    a = math.ceil(n/2.0)
    for i in range(int(a)):
        res = res + ((n-(2*i))**2)
    print(res)
    t = t-1
