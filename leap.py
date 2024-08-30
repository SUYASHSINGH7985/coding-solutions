#Write a program that checks if a given year is a leap year using conditional statements.
year=int(input("Enter a year:"))
if(year%4 ==0) and (year%100 != 0):
    print("it is a leap year")
elif(year%400 == 0) and (year%100 == 0):
    print("it is a leap year")
else:
     print("not a leap year")
