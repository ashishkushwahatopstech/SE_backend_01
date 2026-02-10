#Write a Python program to find greater and less than a number using if_else.


num_1 = int(input("Enter Num 1: "))
num_2 = int(input("Enter Num 2: "))

if num_1>num_2:
    print(num_1, "is Greater and ", num_2, "is Smaller")
else:
    print(num_1,"is Smaller and", num_2, "is Greater")