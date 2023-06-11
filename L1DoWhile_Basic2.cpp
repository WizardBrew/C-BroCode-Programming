#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){

int number;

do{
        cout<<"Enter the Number :\n ";
        cin>>number;
} while (number<0);

cout<<"You Entered + "<<number;

return 0;
}