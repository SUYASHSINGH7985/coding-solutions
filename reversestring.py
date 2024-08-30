#Write a program that prints the reverse of a given string using a loops.
sent="i am here"  
reverse_String = " "  
count = len(sent)
while count > 0:   
    reverse_String += sent[ count - 1 ] 
    count = count - 1 
print ("The reversed string using a while loop is : ",reverse_String)
