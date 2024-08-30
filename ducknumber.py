#Write a program to check if a given number is a duck number using loops and conditional statements.
def ducknumber(num):
    while num>0:
        d=num%10
        if d==0:
            return 1
        num=num//10
    return 0


# main program
n=int(input('Enter a number '))
if ducknumber(n)==1:
    print('Duck Number')
else:
    print('Not Duck Number')
