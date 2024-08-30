#Write a program that checks if a given string is a Palindrome using a loop and conditional statements.
line=" "
reversed = 0
while (temp != 0) :
    reversed = reversed * 10 + (temp % 10)
    temp = temp // 10

if n == reversed:
        print("given number is palindrome")
else:
        print("given number is not palindrome")
