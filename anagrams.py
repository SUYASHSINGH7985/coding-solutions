#Question-29 Write a program that checks if two given strings are anagrams using loops and conditional statements
def check(s1, s2):
     
    # the sorted strings are checked 
    if(sorted(s1)== sorted(s2)):
        print("The strings are anagrams.") 
    else:
        print("The strings aren't anagrams.")         
         
# driver code  
s1 ="listen"
s2 ="silent"
check(s1, s2)
