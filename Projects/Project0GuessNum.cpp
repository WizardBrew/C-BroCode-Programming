#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        int guess;              // My Guesses 
        int num;                // The Guessing Number strored
        int tries;              // My Guess Attempts

        srand(time(NULL));
        num = (rand() %20 )+1;
        cout<<num;
        do{
        cout<<"\n -- == Guess the Number Game ==-- \n";
        cout<<"\n ------------=====------------------- \n";
        cout<<"Guess the Number from 1 to 100\n";
        cin>>guess;
        
         if(guess>num){
                cout<<" Entered Higher number you Entered "<<guess;
        }
        else if(guess<num ){
                cout<<" Entered Lower number  --"<<guess;
        }

        else{
                cout<<" You Found it!! -- "<<guess <<" is the right number -- "<<num;
        }
        
        }while(guess != num);

return 0;
}