# Write a program that calculates the sum of the series (1 + 1/2 + 1/3 + … + 1/n) using a loop.
sum1=0
n=int(input("Enter a number:"))
for i in range(1,n+1):
    sum1=sum1+(1/i)
print("The sum of series is",round(sum1,2))
