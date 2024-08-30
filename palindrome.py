#Write a program to check whether a given number is a Palindrome using loops and conditional statements.
n=int(input("enter a number"))
temp = n
reversed = 0
while (temp != 0) :
    reversed = reversed * 10 + (temp % 10)
    temp = temp // 10

if n == reversed:
        print("given number is palindrome")
else:
        print("given number is not a palindrome")
