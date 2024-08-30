#Write a program that prints all prime numbers within a given range using loops and conditional statement.
startingrange=int(input("enter the starting range"))
endingrange=int(input("enter the ending range"))
print("Prime numbers between", startingrange, "and", endingrange, "are:")

for num in range(startingrange,endingrange + 1):
  
   if num > 1:
       for i in range(2, num):
           if (num % i) == 0:
               break
       else:
           print(num)
