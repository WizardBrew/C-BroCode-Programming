#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        for(char i = 65; i <=75; i++){          // Loop will run from Char i =65 thats A till next 10
                for(int j = 1; j<=5; j++ ){             // j will run alomg with i in matrix formate
                        cout<<i<<" "<<j;
                        cout<<" - ";
                }
                cout<<""<<endl;
        }

return 0;
}