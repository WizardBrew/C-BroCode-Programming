#include<iostream>
#include <cctype>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void convertLower(string input_Text);


int main( ){
        string input_Text ;
        cout<<"Enter The Text\n";
        getline(cin>>std::ws, input_Text);
        
        convertLower(input_Text);

        return 0;
}

void convertLower(string input_Text){           // the input 
          int length = input_Text.length();             // take length as dynamic
        for(int i = 0; i < length ; i ++){                      // Alwasy specify i=0 dont leave blank or it will not consider start
                int convert = input_Text[i];                    // take input array as variable to convert
                input_Text[i] = tolower(convert);       // take array and lower it 
        }
        cout<<input_Text;
}