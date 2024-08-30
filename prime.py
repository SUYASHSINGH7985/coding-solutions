#Write a program using a loop to check whether a given number is prime or not.
number=int(input("enter a number"))
counter = 0
for i in range(1,(number//2)+1):
    if number % i == 0:
        counter = counter + 1

if counter == 1:
  print("given number is a prime number")
else:
  print("given number is not a prime number")
