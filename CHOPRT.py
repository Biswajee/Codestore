t = int(input())
while t!=0:
    x, y = map(int, input().split())
    if x > y:
        print(">")
    elif x < y:
        print("<")
    else:
        print("=")
    t = t-1
