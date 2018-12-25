from random import randint

door = [0]*3

x = randint(1, 3)
# 1 for goat
# 0 for car

door[x] = 1
print(x+1,flush=True) # select door number X

y = int(input().strip()) - 1
door[y] = 1 # definitely a goat

# Whatever remains is car
z = door.index(0)
print(z+1,flush=True)
