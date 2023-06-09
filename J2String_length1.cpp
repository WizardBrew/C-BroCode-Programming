#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;
        cout<<"Enter the Name : "; cin>> name;
        
        if(name.length()>12 ){                          // Validate the Length of the name.
                cout<<"Your name cannot be more than 12 Char";}
        else{cout<<"Welcome "<<name<<endl;   }

return 0;
}