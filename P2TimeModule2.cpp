#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){

                // std::srand(static_cast<unsigned>(std::time(nullptr)));
        // srand(time(0));
        int randnum = rand() % 5 + 1;

        switch (randnum){
        case 1: 
                cout<<randnum<<"  You have a best Career \n";
                break;
        case 2: 
                cout<<randnum<<"  You will Get Enough of Money \n";
                break;
        case 3: 
                cout<<"Amazing Luxury Life \n";
                break;
        case 4: 
                cout<<"High Fame with credibilty  \n";
                break;
        case 5: 
                cout<<"Tech Creator \n";
                break;
        
        default:
        cout<< "This Default is not required HAAHAHA ";
                break;
        }

return 0;
}