#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name ;    // = "WizardBrew";

        cout<<"Enter the name: ";
        getline(cin, name);

        name.append("@outlook.com");    // append(what ever you need at the end of var)
        cout<<name;
        
        
        
return 0;
}