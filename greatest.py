#Write a program that takes three numbers as input and finds the largest and smallest numbers.
print("enter three numbers")
number1=int(input())
number2=int(input())
number3=int(input())
if number1>number2 and number1>number3:
 print("largest",number1)
elif number2>number3 and number2>number3:
 print("largest",number2)
else:
 print("largest",number3)
            
