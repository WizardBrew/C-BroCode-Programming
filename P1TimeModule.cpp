#include<iostream>
// #include<ctime>         // Not required can work in this file basic file untill time is used

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        
        // srand(time(NULL));              // pseduo random Numbers = Not Truely Random (But Close)
                //  int num =rand() ;                       // Usually Genrates long code so can we take reminder of 6, 20 or 100

        int num =(rand() %6) + 1 ;
        int num2 =(rand() %20) + 1 ;
        int num3 =(rand() %100) + 1 ;
     

        cout<<num<< '\n';
        cout<<num2<< '\n';
        cout<<num3<< '\n';

return 0;
}