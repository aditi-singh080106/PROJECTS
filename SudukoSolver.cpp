#include<iostream>
#include<cmath>
using namespace std;
void print(int sudoko [9][9] , int l){
    for(int i = 0 ; i < 9 ; i++ ){
        for(int j = 0 ; j < 9 ; j++ ){
            cout<<sudoko[i][j] <<"  ";
        }
        cout<<endl;
    }
}
bool isValid(int sudoko[9][9] , int i , int j , int num , int n ){
    // row or column check 
    for(int x = 0 ; x < n ; x++  ){
        if(sudoko[i][x] == num || sudoko[x][j] == num)  return false ;
    }
    // check for submatrix
    int rn = sqrt(n);       // rn => root n which is 3 ( squreroot of 9 )
    int si = i-i%rn ;
    int sj = j-j%rn ;
    for(int x = si ; x < si + rn ; x++ ){
        for(int y = sj ; y < sj +rn ; y++ ){
            if(sudoko[x][y] == num )     return false ;

        }
    }
    // if false is not return from anywhere that means that value is valid 
    return true ;

}
bool sudokoSolver(int sudoko[9][9] , int i , int  j , int n ){
    // Base case
    if(i == n ){
        print (sudoko , n);
        return true ;
    }0
    // if we are not inside the board 
    if(j == n ){
        return sudokoSolver(sudoko , i+1 , 0 , n );
    }
    // if cell is already filled move ahead 
    if(sudoko[i][j] != 0 ){
        return sudokoSolver(sudoko , i , j+1 , n );
    }
    // we try to fill  the cell  with an appropriate number 
    for(int  num = 1 ; num <= 9 ; num++ ){
        // check if num can be desired number or not 
        if(isValid(sudoko , i , j , num )){
            sudoko[i][j] = num ;
            bool subAns = sudokoSolver(sudoko , i  , j+1 , n );
            if(subAns){
                return true ;
            }
            
        }
    // Backtracking => undo the change
            sudoko[i][j] = 0 ;
    }
    return false ;
}
int main(){
    int n = 9 ;
    int sudoko [n][n]= {
        {0,0,7,1,0,0,0,6,0},
        {1,0,5,2,0,8,0,0,0},
        {6,0,0,0,0,7,1,2,0},
        {3,1,2,4,0,5,0,0,8},
        {0,0,6,0,9,0,2,0,0},
        {0,0,0,0,0,3,0,0,1},
        {0,0,1,0,0,4,9,8,6},
        {8,0,3,9,0,6,0,0,0},
        {0,6,0,0,8,2,7,0,3},
    };
    int key ;
    cout<<"If you have a sudoko to solve \n";
    cout<<"Press \"1\"\n";
    cout<<"Or Press 0  if don't have a sudoko and want to demonstrarte one ...!\n";
    cout<<"Press your answere .... !\n";
    cin>>key;
    if(key == 0 ){
        sudokoSolver(sudoko, 0 , 0 , n);
    }
    else if(key == 1 ){
        int sudoko2 [9][9] ;
        int tcell , numcell = 0 , rnum , cnum;
        cout<<"Enter the index(containg row and column number ) and the enter the corresponding value the cell ...\n\n\n";
        cout<<"Enter total number of cell filled :-  ";
        cin>>tcell;
       while(numcell <= tcell){
        cout<<"Enter row number :-  ";
        cin>>rnum;
        cout<<"Enter column number :-  ";
        cin>>cnum;
        cout<<"Enter value of correspondin row and column number :-  ";
        cin>>sudoko2[rnum][cnum];
       }
       sudokoSolver(sudoko2 , 0 , 0 , n);
    }
    return 0 ; 
}









#include<iostream>
#include<cmath>
using namespace std;
void print(int sudoko [9][9] , int l){
    for(int i = 0 ; i < 9 ; i++ ){
        for(int j = 0 ; j < 9 ; j++ ){
            cout<<sudoko[i][j] <<"  ";
        }
        cout<<endl;
    }
}
bool isValid(int sudoko[9][9] , int i , int j , int num , int n ){
    // row or column check 
    for(int x = 0 ; x < n ; x++  ){
        if(sudoko[i][x] == num || sudoko[x][j] == num)  return false ;
    }
    // check for submatrix
    int rn = sqrt(n);       // rn => root n which is 3 ( squreroot of 9 )
    int si = i-i%rn ;
    int sj = j-j%rn ;
    for(int x = si ; x < si + rn ; x++ ){
        for(int y = sj ; y < sj +rn ; y++ ){
            if(sudoko[x][y] == num )     return false ;

        }
    }
    // if false is not return from anywhere that means that value is valid 
    return true ;

}
bool sudokoSolver(int sudoko[][] , int i , int  j , int n ){
    // Base case
    if(i == n ){
        print (sudoko , n);
        return true ;
    }
    // if we are not inside the board 
    if(j == n ){
        return sudokoSolver(sudoko , i+1 , 0 , n );
    }
    // if cell is already filled move ahead 
    if(sudoko[i][j] != 0 ){
        return sudokoSolver(sudoko[0] , i , j+1 , n );
    }
    // we try to fill  the cell  with an appropriate number 
    for(int  num = 1 ; num <= 9 ; num++ ){
        // check if num can be desired number or not 
        if(isValid(sudoko , i , j , num )){
            sudoko[i][j] = num ;
            bool subAns = sudokoSolver(sudoko , i  , j+1 , n );
            if(subAns){
                return true ;
            }
            
        }
    // Backtracking => undo the change
            sudoko[i][j] = 0 ;
    }
    return false ;
}
int main(){
    int n = 9 ;
    int sudoko [n][n]= {
        {0,0,7,1,0,0,0,6,0},
        {1,0,5,2,0,8,0,0,0},
        {6,0,0,0,0,7,1,2,0},
        {3,1,2,4,0,5,0,0,8},
        {0,0,6,0,9,0,2,0,0},
        {0,0,0,0,0,3,0,0,1},
        {0,0,1,0,0,4,9,8,6},
        {8,0,3,9,0,6,0,0,0},
        {0,6,0,0,8,2,7,0,3},
    };
    int key ;
    cout<<"If you have a sudoko to solve \n";
    cout<<"Press \"1\"\n";
    cout<<"Or Press 0  if don't have a sudoko and want to demonstrarte one ...!\n";
    cout<<"Press your answere .... !\n";
    cin>>key;
    if(key == 0 ){
        sudokoSolver(sudoko[0], 0 , 0 , n);
    }
    else if(key == 1 ){
        int sudoko2 [9][9] ;
        int tcell , numcell = 0 , rnum , cnum;
        cout<<"Enter the index(containg row and column number ) and the enter the corresponding value the cell ...\n\n\n";
        cout<<"Enter total number of cell filled :-  ";
        cin>>tcell;
       while(numcell <= tcell){
        cout<<"Enter row number :-  ";
        cin>>rnum;
        cout<<"Enter column number :-  ";
        cin>>cnum;
        cout<<"Enter value of correspondin row and column number :-  ";
        cin>>sudoko2[rnum][cnum];
       }
       sudokoSolver(sudoko2 , 0 , 0 , n);
    }
    return 0 ; 
}