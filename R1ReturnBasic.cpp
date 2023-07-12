#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

string concats(string str1, string str2);

int main( ){
string firstname = "Wizard";
string secondname = "Brew";

string fullname = concats(firstname, secondname);

cout<< "Hey hi!! "<<fullname;
return 0;
}

string concats(string str1, string str2){
        return str1 + " " + str2;
}