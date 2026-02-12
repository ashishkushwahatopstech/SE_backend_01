# Write a Python program to merge two lists into one dictionary using a loop.

l1 = ["Name", "Address", "Phone", "Course"]
l2 = ["Ashish", "Kim", 9773174942, "Python_BE"]

b = dict(zip(l1,l2))
print(b)