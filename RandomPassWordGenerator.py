import random; 
import string;
 
password_len = int(input("Enter length of your password:")); 
charSet = string.digits + string.ascii_letters + string.punctuation ; 
password = ""; 
for i in range(password_len):
    password += random.choice(charSet); 
print("Your password is : ", password); 

#This code will generate a password of a specified length, using a combination of digits, letters, and