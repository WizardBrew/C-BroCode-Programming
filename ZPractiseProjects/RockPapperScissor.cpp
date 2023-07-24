#include<iostream>
#include <cctype>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void lowerFunc(string str) ;      
void playerChoice(char choice);
char computerChoice();
char showChoice(char choice);
void ShowWinner();              

int main( ){

        string str ;
        char choice;
        char choice1;
        // // cout<<"Enter The Text\n";
        // // getline(cin>>std::ws, str);
        // lowerFunc(str);
        
        choice1 = showChoice(choice);

        playerChoice(choice1);
        

        

        return 0;
}
void playerChoice(char choice){
        // char choice;
        switch(choice){
                case 'r': cout<<"You Choose  -= Rock =- ";
                        break;
                case 's': cout<<"You Choose  -= Sicssor =- ";
                        break;
                case 'p': cout<<"You Choose  -= Paper =- ";
                        break;
        }

}

char showChoice(char choice){
        do{
        cout<<"Enter Choice\n";
        cin>>choice;
        choice = tolower(choice);
        cout<<" = Rock - Paper - Sicssor";
        cout<<"\n ------======--------\n";
        cout<<"Choose Among this \n = R= | = P= | = S = \n";
        }while(choice != 'r' && choice!= 's' && choice!= 'p');
        return choice;
}

void lowerFunc(string str){                     // str will take input
      int  length = str.length();                       // take length of string as dynamic
        for (int i = 0 ;i < length; i++ ){       // Alwasy specify i=0 dont leave blank or it will not consider start if in function
                int convert = str[i];                   // take str array and convert the element to lower
                str[i] = tolower(convert);
        }
        cout<< str;  
}