#Write a Python program to apply the map() function to square a list of numbers

a = [2,3,5,6,8,]
b = [2,2,3,54,45]

a = map(lambda x,y: x*y, a,b)

print(list(a))
