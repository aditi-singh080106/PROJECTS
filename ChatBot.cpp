#include<iostream>
#include<windows.h>
#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std ;
void greet(){
    time_t now = time(0) ;
    tm *time = localtime(&now) ;
    if(time->tm_hour < 12){
        cout<<"Good Morning ...!" <<endl;
    }
    else if(time->tm_hour >= 12 && time->tm_hour <= 16 ){
        cout<<"Good Afternoon ... !"<<endl;
    }
    else if(time->tm_hour > 16 && time->tm_hour <= 20 ){
        cout<<"Good Evening ... !"<<endl;
    }
    else {
        cout<<"Good Night ... !"<<endl;
    }
}
void dateTime(){
    time_t now = time(0) ;
    char *dt = ctime(&now) ;
    cout<<"Today's date and time is :- "<<dt<<endl<<endl;
}
int main(){
    system("clr") ;
    cout<<"\n\n\n";
    cout<<"\t\t\t\t*------------------------------- WELLCOME -------------------------------*"<<endl;
    cout<<"\t\t\t\t*------------------------------- I'M A VIRTUAL ASSISTANT -------------------------------* "<<endl;
    cout<<"\t\t\t\t*------------------------------- I'M HERE TO HELP YOU OUT -------------------------------*"<<endl;
    cout<<"\t\t\t\t*------------------------------- MY NAME IS G0FER -------------------------------*"<<endl;
    char passcode[20];
    char prbl[150] ;
    do{
        cout<<"*-----------------------------------------------------------------------------------------------*"<<endl<<endl;
        cout<<"Enter your password :-"<<endl; // password is the name of assistant
        gets(passcode);
        if(strcmp(passcode,"gofer") == 0 || strcmp(passcode,"Gofer") == 0 ){
            cout<<"Password Matched ... !"<<endl<<endl ;
            greet();
            cout<<"*-----------------------------------------------------------------------------------------------*"<<endl<<endl;
            STARTUPINFO stInfo = {0};
            PROCESS_INFORMATION pInfo = {0};
            do{
                cout<<" How can I help you ... ? \n";
                cout<<" your Query .....\n\n";
                gtes(prbl);
                cout<<" Here is the result of your Query :-\n";
                if(strcmp(prbl , "hi")==0||strcmp(prbl,"hey")==0||strcmp(prbl,"hello")==0){
                    cout<<"Hello , What can I do for you .... ? \n";
                }
                else if(strcmp(prbl , "bye")==0||strcmp(prbl,"stop")==0||strcmp(prbl,"exit")==0){
                    cout<<"Good Bye , Feel free to hit up again ... !\n\n";
                    exit(0);
                }
                else if(strcmp(prbl , "who are you ")==0){
                    cout<<"I'm a virtual assistant created for a purpose to help you out ... ! \n";
                }
                else if(strcmp(prbl , "how are you ")==0||strcmp(prbl,"whatsup")==0||strcmp(prbl ,"how's yor day")==0){
                    cout<<"I'm Good , Thanks for asking .....\n";
                    cout<<"Tell me how can I help you ... ? \n";
                }
                else if(strcmp(prbl , "time")==0||strcmp(prbl,"date")==0){
                    dateTime();
                }
                else if(strcmp(prbl , "Notepad")==0||strcmp(prbl,"notepad")==0||strcmp(prbl,"open notepad")==0){
                    cout<<"Opening notepad ......\n\n";
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe")NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&stInfo,&pInfo);
                }
                else if(strcmp(prbl , "Instagram")==0||strcmp(prbl,"instagram")==0||strcmp(prbl,"open instagram")==0){
                    cout<<"Opening Instagram ......\n\n";
                    System("Start https://www.instagram.com");
                }
                else if(strcmp(prbl , "Whatsapp")==0||strcmp(prbl,"whatsapp")==0||strcmp(prbl,"open whatsapp")==0){
                    cout<<"Opening Whatsapp ......\n\n";
                    System("Start https://www.whatsapp.com");
                }
                else if(strcmp(prbl , "Snapchat")==0||strcmp(prbl,"snapchat")==0||strcmp(prbl,"open snapchat")==0){
                    cout<<"Opening Snapchat ......\n\n";
                    System("Start https://www.snapchat.com");
                }
                else if(strcmp(prbl , "LinkedIn")==0||strcmp(prbl,"linkedin")==0||strcmp(prbl,"open linkedin")==0){
                    cout<<"Opening LinkedIn ......\n\n";
                    System("Start https://www.linkedin.com");
                }
                else if(strcmp(prbl , "Google")==0||strcmp(prbl,"google")==0||strcmp(prbl,"open google")==0){
                    cout<<"Opening Google ......\n\n";
                    System("Start https://www.google.com");
                }
                else if(strcmp(prbl , "Stack Overflow")==0||strcmp(prbl,"stack overflow")==0||strcmp(prbl,"open stack overflow")==0){
                    cout<<"Opening Stack Overflow ......\n\n";
                    System("Start https://www.stackoverflow.com");
                }
                else if(strcmp(prbl , "Youtube")==0||strcmp(prbl,"youtube")==0||strcmp(prbl,"open youtube")==0){
                    cout<<"Opening Youtube ......\n\n";
                    System("Start https://www.youtube.com");
                }
                else{
                    cout<<"Sorry I can't found out your Query ... ! \n\n";
                    cout<<"Try again ............................ ! \n\n\n" ;
                }
            }while(true);

            else{
                cout<<"INCORRECT PASSWORD .......... !  \n\n ";
            }
        }
    }while(true);
    return 0 ;
}