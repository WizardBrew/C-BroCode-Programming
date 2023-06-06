#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;            //  = "WizarBrew";

        cout<<"Enter the name: ";
        getline(cin, name);

        cout<<name.insert(6, "-");            // instert ( which_Place,   entered data needed )

return 0;
}