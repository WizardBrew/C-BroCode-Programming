#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
char alpha = 'A';
char alpha1 = 'B';
alpha = tolower(alpha);
alpha1 = toupper(alpha1);
cout<<alpha<<'\n';
cout<<alpha1<<'\n';

string str = "Parvez";
for(int i ; i<str.length(); i++){               // here we can take "for i" is blank but not in sep func
        // int converts = str[i];                        //   1) ṛemove or 2)assign str array for an variable 
        str[i] = tolower(str[i]);             // convert the array in lower for each element in array
        }                                         
        cout<< str;    
return 0;
}