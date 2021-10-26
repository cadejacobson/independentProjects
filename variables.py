name = "Ronaldo"
num = 7
age = 34 

#multi-assignment
name, num, age = "Ronaldo", 7, 34

#prints the assignments
print(name)
print(num)
print(age)

#multistatement print
print(name, num, age)

#adding text within the print function
print("The player's name is " , name, ", his age is ", age, ", and his number is ", num)

#addition signs can be used as well, use str()
print("The player's name is " + name + ", his age is " + str(age) + ", and his number is " + str(num))
