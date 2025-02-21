#include<iostream>
#include<cstdlib> // stdlib.h
#include<ctime>//time.h 00:00:00
//math.h cmath
using namespace std;
int main(){
    cout<<"\t\t\t\t-:WELLCOME TO GUESS THE NUMBER GAME :-"<<endl<<endl<<endl;
    cout<<"You have to guess the number in range of 1 to 100 .\n";
    cout<<"You have limited choice base on the level of difficulty  you will choose .\n";
    cout<<"\n\n GOOD LUCK !\n";
    while(true){
        cout<<"\tDecide the level of difficulty :-"<<endl;
        cout<<"\tPress 1 for Easy level ( get 10 chance to find the number ) :-"<<endl;
        cout<<"\tPress 2 for Medium level ( get 5 chance to find the number ) :-"<<endl;
        cout<<"\tPress 3 for Hard level ( get 3 chance to find the number ) :-"<<endl;
        cout<<"\tPress 0 to End the game :-"<<endl;
        int levelOfDifficulty;
        cout<<"\tEnter the Difficulty level :-";
        cin>>levelOfDifficulty;
        srand(time(0));
        int cnum = 1 + (rand() % 100) ; // number choosen by cumputer 
        int unum ;                      // number choosen by user 
        if(levelOfDifficulty == 1 ){
            cout<<endl;
            cout<<"\t You had choosen level 1 :-"<<endl;
            cout<<"\t YOu have 10 choice for finding the number in range of 1 to 100 ";
            int chance = 10 ;
            for(int i = 1 ; i <= 10 ; i++ ){
                cout<<"\n\n\t Enter your number :- ";
                cin>>unum;
                if(unum == cnum){
                    cout<<"\tWELL DONE !\n\t You won !"<<endl;
                    cout<<"\t "<<unum<<" is the secret (computer's) number !"<<endl;
                    cout<<endl<<"\t\t\t THANKS FOR PLAYING .....\n";
                    cout<<"\t You can play the game again  !!"<<endl;
                    break;
                }
                else if(unum > cnum){
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is smaller than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                else {
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is greater than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                if(chance == 0 ){
                    cout<<"\t OOPS you couldn't find out the secret number !\n";
                    cout<<"\t The secret number was "<<cnum<<endl;
                    cout<<"\t You can play the game again to Win ... !"<<endl;
                }
            }
        }
        //medium level
        else if(levelOfDifficulty == 2 ){
            cout<<endl;
            cout<<"\t You had choosen level 2 :-"<<endl;
            cout<<"\t YOu have 5 choice for finding the number in range of 1 to 100 ";
            int chance = 5 ;
            for(int i = 1 ; i <= 5 ; i++ ){
                cout<<"\n\n\t Enter your number :- ";
                cin>>unum;
                if(unum == cnum){
                    cout<<"\tWELL DONE !\n\t You won !"<<endl;
                    cout<<"\t "<<unum<<" is the secret (computer's) number !"<<endl;
                    cout<<endl<<"\t\t\t THANKS FOR PLAYING .....\n";
                    cout<<"\t You can play the game again  !!"<<endl;
                    break;
                }
                else if(unum > cnum){
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is smaller than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                else {
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is greater than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                if(chance == 0 ){
                    cout<<"\t OOPS you couldn't find out the secret number !\n";
                    cout<<"\t The secret number was "<<cnum<<endl;
                    cout<<"\t You can play the game again to Win ... !"<<endl;
                }
            }
        }
        else if( levelOfDifficulty == 3 ){
            cout<<endl;
            cout<<"\t You had choosen level 3 :-"<<endl;
            cout<<"\t YOu have 3 choice for finding the number in range of 1 to 100 ";
            int chance = 3 ;
            for(int i = 1 ; i <= 3 ; i++ ){
                cout<<"\n\n\t Enter your number :- ";
                cin>>unum;
                if(unum == cnum){
                    cout<<"\tWELL DONE !\n\t You won !"<<endl;
                    cout<<"\t "<<unum<<" is the secret (computer's) number !"<<endl;
                    cout<<endl<<"\t\t\t THANKS FOR PLAYING .....\n";
                    cout<<"\t You can play the game again  !!"<<endl;
                    break;
                }
                else if(unum > cnum){
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is smaller than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                else {
                    cout<<"\t Nope , "<<unum<<" is not the correct number !"<<endl;
                    cout<<"\t The secret number is greater than the number you had entered ."<<endl;
                    chance--;
                    cout<<"\t "<<chance<<" chance left ..."<<endl;
                }
                if(chance == 0 ){
                    cout<<"\t OOPS you couldn't find out the secret number !\n";
                    cout<<"\t The secret number was "<<cnum<<endl;
                    cout<<"\t You can play the game again to Win ... !"<<endl;
                }
            }
        }
        else if( levelOfDifficulty == 0 ){
            cout<<"-: THANKS FOR PLAYING :- \n";
            exit(0);
        }
        else{
            cout<<"\t Wrong choice !\n";
            cout<<"Enter valid choice (i.e 0 , 1 ,2 , 3 ) to play the game ....!\n\n";
        }

    }
    return 0 ;
}
