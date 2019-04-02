def reverse(s): 
  str = "" 
  for i in s: 
    str = i + str
  return str

def is_Palindrome(s):
    r = reverse(s)
    print(r)
    if r == s:
        return 1
    else:
        return 0

inp = input()
res = is_Palindrome(inp)
if res == 0:
    print("not palindrome")
else:
    print("palindrome")
