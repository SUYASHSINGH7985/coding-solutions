userA=set()
userB=set()
userC=set()
s1=input()
s2=input()
s3=input()
userA.update(s1.split())
userB.update(s2.split())
userC.update(s3.split())
userA.update({"Blues","Rock", "Country"})
print("Updated genres for User A:",userA)
print("The genres liked by both User A and User B:",userA & userB)
print("The genres that are liked by User A but not by User B:",userA-userB)
print("The common genres liked by all three users:",userA & userB & userC)
print("The total unique genres liked by all users:",userA | userB | userC)
print("The genres that only one user likes:",(userA-userB-userC)^(userB-userC-userA)^(userC-userA-userB))
print("The genres that are liked by exactly two users:",(userA & userB) | (userB & userC)| (userC & userA))
print("The genres liked by User C but not by User A or User B:",(userC-userA-userB))
userB.clear()
print("User B's genres after clearing :",userB)
userA.add("Jazz")
print("User A updated genres after adding 'Jazz':",userA)
newSet=userC.copy()
newSet.discard("Hip-Hop")
newSet.add("Electronic")
print("User C's copied set after removing 'Hip-Hop' and adding 'Electronic':",newSet)
if(userA.issuperset(userC)):
 print("User A listens to all genres that User C likes")
else:
 print("User A does not listen to all listen to all genres that User C likes")
if(userB < userA):
 print("User B listens to fewer genres than User A")
if(userC > userB):
 print("User C has a more diverse range of genres compared to User B")
newSet1=userA & userB
if(newSet1.issuperset(userC)):
 print("Intersection set is a superset of User C's genres")
else:
 print("The intersection of User A and User B is not a superset of User C's genres")   
 
    

    
