#Write a program to check if a given number is automorphic using loops and conditional statements.
num=int(input("Enter a number"))
square=num*num
while (num>0):
 if (num % 10 != square % 10):
  print("it is an automorphic number")
  square=square//10
  num=num//10
 else:
  print("it is not an automorphic number")
    
