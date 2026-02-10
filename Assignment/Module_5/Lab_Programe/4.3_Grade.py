#Write a Python program to calculate grades based on percentage using if-else ladder

percentage = float(input("Enter Your Percentage: "))

if percentage>90 and percentage<=100:
    print("Grade: A+")
elif percentage>80 and percentage<=90:
    print("Grade: A")
elif percentage>70 and percentage<=80:
    print("Grade: B+")
elif percentage>50 and percentage<=70:
    print("Grade: B")
elif percentage>=40 and percentage<=50:
    print("Grade: C")
elif percentage<40 and percentage>0:
    print("Fail")
else:
    print("Please enter a Valid Value!")
