class ArithmeticProgression:
  def __init__(self,a_val=1,d_val=1):
    self.a = a_val
    self.d = d_val
    
  def get(self,n):
    an = self.a+((n-1)*self.d)
    return an
  
  def sum(self,n):
    sn = (n/2)*((2*self.a) + ((n-1)*self.d))
    return sn
  
x = ArithmeticProgression(5,3)
y = ArithmeticProgression()

print(y.get(5))
print(x.sum(1))