#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;

        // cout<<"Enter Name: ";
        // cin>>name;

        do{
                cout<<"Enter name : ";
                cin>>name;
        } while(name.length()>4);
        cout<<"Hey you did it by typing : "<<name;

return 0;
}