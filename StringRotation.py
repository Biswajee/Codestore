store = []
mag = 0
x = input()
unq = list(set(x))
q = int(input())
for _ in range(q):
    dir = input()
    mgt = int(input())
    if dir == "R":
        mgt = -mgt
    mag = mag + mgt
    store.append(x[mag]) 

if store == unq:
    print("YES")
else:
    print("NO")
