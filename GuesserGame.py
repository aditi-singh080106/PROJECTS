import random; 
key = random.randint(1,100); 
print("Level 1 (Easy) : Get 5 chances to guess the correct  number between 1 and 100"); 
print("Level 2 (Medium) : Get 3chances to guess the correct  number between 1 and 100"); 
print("Level 3 (Hard) : Get 1 chance to guess the correct  number between  1 and 100"); 
chances = int(input("Enter difficulty level : "));
while True:
    for i in range (chances): 
        guess = (input("Guess the number or press \' Quit\' to Exit : "));               
        if(guess == "Quit"):
            break; 
        else:
            guess = int(guess); 
            if(guess == key):
                print("Congratulation..!"); 
                print("You guessed  the number in", i+1, "chance(s)"); 
            elif(guess < key):
                print("OOPS...!"); 
                print("Your number is smaller than the screte number...! "); 
                print("Guess the bigger number , you have ", chances - i - 1, "chance(s) left"); 
            else:
                print("OOPS...!"); 
                print("Your number is bigger than the secret number...!"); 
                print("Guess the smaller number , you have ",chances-i-1,"chance(s) left"); 
    print("Screte number is : ",key);    
    quit =  input("Do you want to play again ? (yes/no) : "); 
    if(quit == "no"):
        break; 
print("Thanks for playing ...!"); 

