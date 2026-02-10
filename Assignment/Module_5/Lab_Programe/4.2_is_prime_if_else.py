# Write a Python program to check if a number is prime using if_else.

num_1 = int(input("Enter a Number: "))


flag = 0
for i in range(2,num_1):
    if num_1%i==0:
        flag = 1
        break 



if flag ==0:
    print(num_1, "is Prime Number")
else:
    print(num_1, "is Non Prime")