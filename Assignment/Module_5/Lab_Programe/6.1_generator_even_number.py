#Write a generator function that generates the first 10 even numbers

def even_num():
    for i in range(1,11):
        yield i*2


gen = even_num()

print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))
print(next(gen))