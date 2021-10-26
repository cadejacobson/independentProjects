import random

print(3 == 3) #true
print(2 == 3) #false
print(10 > 11) #false
print(30 <= 18) #false
print(25 >= 9) #true

x = round(1000 * random.random())
print(x)
print(x % 2)
if (x % 2 == 0):
    print("true")
else:
    print("false")


a = 10 if 20>15 else 5
print(a)