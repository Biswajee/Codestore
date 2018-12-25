t = int(input())
while t!=0:
    (p1, p2, k) = map(int, input().split(' '))

    total = p1 + p2
    lessk = total/k

    if(int(lessk)%2==0):
        print("CHEF")
    else:
        print("COOK")
    t = t-1
