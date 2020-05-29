#this program check the validity of a password(input from users).
#validation:
#at least 1 letter between[a-z] and one between [A-z]
#at least one 1 number between [0-9]
#at least one punctuation sign
#minimun 6 chars and the maximun length is 16 characters
lower_letter = "abcdefghijklmnopqrstuvwxyz"
upper_letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
numbers = "1234567890"
marks = "!¡#$%&/\(\);,:.-_@"

low=0
up=0
num=0
mar=0

print("wirte Your password")
password = input()
size = len(password)


if size < 6:
   print("Password too short")
elif size>6 and size<=16:
   #countig what chars the password has:
   for i in password:
           if i in lower_letter:
               low += 1
           if i in upper_letter:
               up += 1
           if i in numbers:
               num +=1
           if i in marks:
               mar += 1

   print("{}{}{}{}".format(low,up,num,mar))

   if low>=1 and up>=1 and num>=1 and mar>=1:
       print("valid password")
   elif low==0 and up>=1 and num>=1 and mar>=1:
       print("you need at least one lowercase letter")
   elif low>=1 and up==0 and num>=1 and mar>=1:
       print("you need at least one uppercase letter")
   elif low>=1 and up>=1 and num==0 and mar>=1:
       print("you need at least one number")
   elif low>=1 and up>=1 and num>=1 and mar==0:
       print("You need at least one puntuation mark!")
   else:
       print("invalid password")

elif size>16:
    print("password too long")
