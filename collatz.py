#Write a program that generates the Collatz sequence for a given number using loops.
def collatz(number):
  lst=[]
  lst.append(number)
  while(number!=1):
      if(number%2==0):
          number=number//2
          lst.append(number)
      else:
          number=number*3+1
          lst.append(number)
  print(lst)
collatz(11)
