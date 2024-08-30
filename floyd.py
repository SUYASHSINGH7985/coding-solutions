#Write a program that generates Floyd's triangle using loops.
row = int(input('Enter number of rows: '))

# Setting number to 1
number = 1

print("Floyd's triangle is:")
for i in range(1,row+1):
    for j in range(1, i+1):
        print(number, end='\t')
        number += 1
    print()
