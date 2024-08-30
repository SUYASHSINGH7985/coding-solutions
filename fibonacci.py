# Write a program that prints the Fibonacci sequence up to a specified number of terms using a loop.
num = int(input("Enter the number of terms upto which the user wants to get the fibonacci sequence"))
n1, n2 = 0, 1
print("Fibonacci Series:", n1, n2, end=" ")
for i in range(2, num):
    n3 = n1 + n2
    n1 = n2
    n2 = n3
    print(n3, end=" ")

print()
