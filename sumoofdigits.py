#Write a program that calculates the sum of digits of a given number using a loop.
number=int(input("Enter a number"))
sumofdigits=0
while number > 0:
 sumofdigits+=number%10  
 number=number//10   
print("the sum of digits are:",sumofdigits)
