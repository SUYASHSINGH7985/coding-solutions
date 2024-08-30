#Write a program that finds the sum of even and odd numbers within a specified range using loops and conditional statement.
number1 = int(input("Enter the starting range"))
number2=int(input("Enter the ending range"))
x = 0
y = 0
for n in range(number1,(number2)+1):
    if n % 2 == 0:
        x += n
    else:
        y += n
print("Sum of even numbers is:",x)
print("Sum of odd numbers is:",y)

