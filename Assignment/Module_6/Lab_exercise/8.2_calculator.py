# Write a Python program to create a calculator using functions.

def calc(x,y,op):
    match(op):
        case "+":
            print(f"Addition of {x} and {y} is {x+y}")
        case "*":
            print(f"Multiplication of {x}, and {y}, is {x*y}")
        case "/":
            try:
                print(f"Division of {x} and {y} is {x/y}")
            except Exception as e:
                print(e)
        case "-":
            print(f"Subtraction of {x} and {y} is {x-y}")
        case _:
            print("Wrong! Operator, Choose Again")

num_1 = int(input("Enter Num 1: "))
num_2 = int(input("Enter Num 2: "))
op = input("Enter a Operator: +, -, /, *: ")
calc(num_1,num_2,op)