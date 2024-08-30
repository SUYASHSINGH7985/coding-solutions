#Write a program that calculates the sum of the cubes of the first 'n' natural numbers using a loop.
n=int(input("Enter a number:"))
sum1=0
for i in range(0,(n)+1):
      sum1=sum1+i*i*i
print(sum1)
      
