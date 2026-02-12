#Write a Python program that filters out even numbers using the filter() function. 


a = [12,32,65,32,65,95]


c = map(lambda x: x%2==0, a)
print("c", list(c))



b = filter(lambda x: x%2==0, a)
print(list(b))
