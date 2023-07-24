#include<iostream>
#include <cctype>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void lowerFunc(string str){                     // str will take input
      int  length = str.length();                       // take length of string as dynamic
        for (int i = 0 ;i < length; i++ ){       // Alwasy specify i=0 dont leave blank or it will not consider start if in function
                int convert = str[i];                   // take str array and convert the element to lower
                str[i] = tolower(convert);
        }
        cout<< str;  
}

int main( ){

        string str ;
        cout<<"Enter The Text\n";
        getline(cin>>std::ws, str);

        lowerFunc(str);

        cout<<"\n--------------------\n";
        cout<<str;
        

return 0;
}