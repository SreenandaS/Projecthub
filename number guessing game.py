import random
secret=random.randint(1,10)
print("Guess a number between 1 and 10")
while True:
    guess=int(input("Enter your guess:\n"))
    if guess>secret:
        print("Too high")
    elif guess<secret:
        print("Too low")
    else:
        print("you guessed correct")
        print("Game over")
        break