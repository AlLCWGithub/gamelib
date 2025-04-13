no1 = float(input("Input the first number: "))
op = input("Input an operator (+ - * /): ")
no2 = float(input("Input the second number: "))

if op == "+":
    ans = no1 + no2
elif op == "-":
    ans = no1 - no2
elif op == "*":
    ans = no1 * no2
elif op == "/":
    ans = no1 / no2
    ans = round(ans, 2)
else:
    print("Invalid operator!")
    exit(0)

print(f"The answer is {ans}!")
