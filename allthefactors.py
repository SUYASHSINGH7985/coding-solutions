# Write a program that prints all the factors of a given number using a loop.
x=int(input("enter a number"))
print("The factors of",x,"are:")
for i in range(1, x + 1):
       if x % i == 0:
           print(i)
 
