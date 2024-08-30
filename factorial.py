#Write a program that calculates the factorial of a given number using a loop.
fact=int(input("enter the number of factorial"))
n=1
for i in range(1,fact+1):
 n=n*i
print("the factorial of a given number is",n)
