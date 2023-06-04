#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
                int temp;
        bool sunny = true;

        if (temp > 0 && temp < 30){
                cout<<"Temp is bad\n";
        }
        else{
                cout<<"temp is good\n";
        }
        if(!sunny){
                cout<<"Its cloud Outside\n";
        }
        else{
                cout<<"its Sunny\n";
        }

return 0;
}