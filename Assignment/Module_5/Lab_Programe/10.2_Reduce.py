#Write a Python program that uses reduce() to find the product of a list of numbers. 

from functools import reduce

a = [2,2,2,2,2]
# b = [45,65,98,45,32,1]

b = reduce(lambda x,y: x+y, a)
print(b)