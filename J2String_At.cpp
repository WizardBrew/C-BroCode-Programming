#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name ;   //  = "WizardBrew";

        cout<<"Enter the name: ";
        getline(cin, name);

               cout<< name.at(6);                     //at (place or Index to find)

return 0;
}