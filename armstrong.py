 #Write a program to check if a given number is an Armstrong number using loops and conditional statements.
num=int(input("Enter a number"))
OriginalNum = num
result=0
while (OriginalNum != 0):
    order = len(str(num))
    remainder = OriginalNum % 10
    result = result+(remainder)**order
    OriginalNum = OriginalNum//10
if result==num:
 print("given number is an Armstrong number");
else:
 print("given number is not an Armstrong number");

