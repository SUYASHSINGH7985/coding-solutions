#Write a program that prints the multiplication table of a given number using a loop
number = int(input ("Enter the number to print the multiplication table: "))           
print("The Multiplication Table of: ", number)    
for count in range(1, 11):      
   print(number*count)    
