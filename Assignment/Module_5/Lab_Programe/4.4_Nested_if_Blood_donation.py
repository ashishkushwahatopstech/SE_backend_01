#Write a Python program to check if a person is eligible to donate blood using a nested if.

age = int(input("Enter Your Age: "))
weight = float(input("Enter Your Weight: "))

if age>18:
    if weight>50:
        print("You are eligible for Blood Donation")
    else:
        print("Not eligible, Your Weight did't match our condition")
else:
    print("You are Not eligible, age not matched our condition")