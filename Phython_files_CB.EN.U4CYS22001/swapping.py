# declared the variable a
print("enter the value for a")
a = int(input())

# declared the varible b
# redeving values for user
print("enter the value for b")
b = int(input())
print("values of a and b before swapping")
print("a=" + str(a))
print("b=" + str(b))

# swapping the numbers
a = a + b
b = a - b
a = a - b

# displaying the results
print("a=" + str(a))
print("b=" + str(b))
