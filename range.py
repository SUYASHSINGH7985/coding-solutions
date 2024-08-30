#Write a program that prints the first 'n' odd numbers and even numbers separately. Use a loop to generate and display the output.
n=int(input("enter the range"))
for n in range(1,n+1):

#checking which numbers in range are even or odd
 if n%2==0:
     print('even numbers are:',n)
for n in range(1,n+1):
 if n%2!=0:
     print('odd numbers are:',n)
    

