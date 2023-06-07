#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name, name1 , name2;
        cout<<"Enter Your Name  :\n";
        getline(cin,name)>>name1>>name2;

        name.clear();
cout<<name1<<" - First Name  : " <<name<<" - Second name   : "<<name2<<" - Third name ";
        
return 0;
}