#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;            // = "WizardBrew";

        cout<<"Enter the name: ";
        getline(cin, name);
        
        cout<<name.length();            //length (Empty)        as it shows the length 

return 0;
}