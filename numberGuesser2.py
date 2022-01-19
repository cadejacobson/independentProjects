print("Please enter integers only.")

print("Please enter the low end of the range:")
lowRange = int(input())


print("Please enter the high end of the range:")
highRange = int(input())


midpoint = round((highRange + lowRange) / 2)
print("Is " + str(midpoint) + " your number?")
print("Please respond \'y\', \'higher\' or \'lower\' ")
userResponse = input()

while userResponse != 'y':
    if userResponse == "higher":
        lowRange = midpoint
    if userResponse == "lower":
        highRange = midpoint
    midpoint = round((highRange + lowRange) / 2)
    print("Is " + str(midpoint) + " your number?")
    print("Please respond \'y\', \'higher\' or \'lower\' ")
    userResponse = input()


print("Rerun to play again")