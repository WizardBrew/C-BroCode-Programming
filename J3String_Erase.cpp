#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name = "WizardBrew";
        cout<<"Enter the name: ";
        getline(cin, name);

        // cout<<name.erase(0, 6 );  // Delete the char from 0 to 6.
        cout<<name.erase(5, 8 );  // Delete the char from 0 to 6.

return 0;
}