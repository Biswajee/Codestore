def checkBit(pattern,arr,  n) : 
    count = 0     
    for i in range(0, n) : 
        if ((pattern & arr[i]) == pattern) : 
            count = count + 1
    return count 
  
def maxAND (xy,  v) : 
    res = xy
    for bit in range(31,-1,-1) : 
        count = checkBit(res | (1 << bit), v) 
        if ( count >= 2 ) : 
            res =res | (1 << bit)               
    return res 

t = int(input())
while t!=0:
    x,y,l,r = map(int, input().split())
    if min(x,y)==0:
        print(0)
        continue
    w = x | y
    if w>=l && w<=r:
        print(w)
        continue
    glist = list(map(int, input().split()))
    ans = maxAND(x&y, glist)
    print(ans+1)
    t=t-1