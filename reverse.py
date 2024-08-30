#Write a program that reverses a given number using a loop.
number=int(input("Enter a number which user wants to be reversed"))
originalnumber = number
reverse = 0
while number > 0:
 digit = number % 10
 reverse = reverse * 10 + digit
 number //= 10
print("reversed number is:",reverse)
