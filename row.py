#Write a program that generates a pyramid pattern of stars using nested loops.
rows = int(input("Enter number of rows: "))

for i in range(rows):
    for j in range(i+1):
        print("* ", end="")
    print()
