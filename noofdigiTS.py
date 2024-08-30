#: Write a program that counts the number of digits in a given number using a loop.
number=int(input("enter  a number"))
numberofdigits=0
while number > 0:
 number = number // 10  
 numberofdigits+= 1
print("number of digits are:",numberofdigits)
