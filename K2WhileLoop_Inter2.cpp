#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;                            // Var
        cout<<"Enter Name: ";           // Display
        cin>>name;                              // Takes input

        while(name.length()>4){         // checks if the input is more than length
                cout<<"Enter name : ";          // if length id more than re takes input
                cin>>name;                              // if meets the length then exits
        }
        cout<<"Hey you did it by typing : "<<name;      // displays the loop out

return 0;
}