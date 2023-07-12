#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        srand(time(NULL));      // Shuffles the Randowm numbers 

        int num = rand()%30 +1;
        int num1 = rand()%20 +1;
        int num2 = rand()%5 +1;
        cout<<num<<"\n";
        cout<<num1<<"\n";
        cout<<num2;


return 0;
}