N, r = map(int, input().split())
for _ in range(N):
    rating = int(input())
    if rating >= r:
        print("Good boi")
    else:
        print("Bad boi")
