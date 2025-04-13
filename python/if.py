age = int(input("Enter your age: "))


if age >= 100:
    print("You are very old, congrats!")
elif age >= 18:
    print("You are 18 or above!")
elif age < 0:
    print("You are not born yet!")
else:
    print("You are below 18!")
