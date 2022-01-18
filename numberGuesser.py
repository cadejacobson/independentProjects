import random

print("Enter the low end of your range: ")
lowInput = int(input())

print("Enter the high end of your range: ")
highInput = int(input())

guess = random.randint(lowInput, highInput)

print(guess)

print("Please enter a guess:")

userGuess = int(input())
while userGuess != guess:
    if userGuess < guess:
        print(str(userGuess) + " is too low! Guess again.")
    else:
        print(str(userGuess) + " is too high! Guess again.")
    userGuess = int(input())

print("Correct! The number was " + str(guess) + ".")