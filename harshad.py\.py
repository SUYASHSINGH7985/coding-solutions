#Write a program to check if a given number is a Harshad (Niven) number using loops and conditional statements.
def checkHarshad(n):
    sum = 0
    temp = n
    while temp > 0:
        sum = sum + temp % 10
        temp = temp // 10

    # Return true if sum of digits is multiple of n
    return n % sum == 0

if(checkHarshad(12)):
    print("it is a harshad number")
else:
    print("not a harshad number")

if (checkHarshad(15)):
    print("it is a harshad number")
else:
    print("it is not a harshad number")
