def Kaden(a, m):
    max_current = a[0]
    max_global = a[0]
    for i in range(1, len(a)-1):
        max_current = max(a[i], max_current + a[i])
        if (max_current > max_global):# and (max_current <= m):
            max_global = max_current
    return max_global

a = []
n , m = input().split()
n = int(n)
m = int(m)
a = list(map(int, input().split()))
res = Kaden(a, m)
print(res)