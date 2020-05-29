# this program calculates the euler constant e using a for cycle
#calculating the number's factorial,
def factorial(n):
     if n == 0:
       return 1;
     else:
       return n * factorial(n-1);

#calculating the euler's constant
euler = 1
for i in range(1,100,1):
    x = factorial(i)
    euler += (1/x)

print("e is = {} ".format(euler))
