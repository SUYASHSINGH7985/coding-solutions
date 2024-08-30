#Write a program that calculates the sum of the squares of the first 'n' natural numbers using a loop.
num=int(input("Enter a number upto which the user wants to get the sum of squares:"))
sum=0
for i in range(0,num+1):
 sum=sum+i*i
print("Sum of the squares is:",sum)
