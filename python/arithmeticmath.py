import math

# friends = 5

# Better way to increment or decrement

#friends += 1
#friend -= 1

#Works for multiplication and division too!

#friends *= 3
#friends /= 2 

# Exponant

# friends **= 2

# Modulus

# remainder = friends % 2

# print(friends)
# print(remainder)
# x = 3.14
# y = -4
# z = 5

# result = round(x)
# result = abs(y)
# result = pow(4, 3)
# result = max(x, y, z)
# result = min(x, y, z)
# print(result)
# print(math.pi)
# print(math.e)
# x = 9
# y = 8.4
# result = math.sqrt(x)
# result = math.ceil(y)
#result = math.floor(y)
# print(result)

radius = float(input("What is the radius of the circle in cm: "))

circumference = 2 * math.pi * radius
area = math.pi * pow(radius, 2)

# Not nice if the code wraps around itself
circumference = round(circumference, 2)
area = round(area, 2)
            
print(f"The circumference of the circle is {circumference}cm!")
print(f"The area of the circle is {area}cm²!")
