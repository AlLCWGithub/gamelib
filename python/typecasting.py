name = "Bob"
quantity = 4
price = 3.45
isabove18 = False

price = int(price)
quantity = float(quantity)
name = bool(name)
isabove18 = str(isabove18)

print("The output will be weird!")
# Output should say $3 
print(f"The price of a pack of apples is ${price}!")
# Output should say 4.0 
print(f"Each pack has {quantity} apples!")
# Output should say True 
print(f"Your name is {name}!")
# Output is always true 
if isabove18:
    print("You are above 18!")
else:
    print("You are not above 18")
print("Check inside of the file for code!")
