#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;
int main( ){
        int a;                                  // Declear the variable
        cout<<"Enter Num:";     // first time asks the number
        cin>>a;                                 //Takes input
        while(a<10){                            // checks condition and loops
                cout<<"enter number :";         // if the var is false above repeats
                cin>>a;                                               // takes input as usual until true.
        }
        cout<<"You ENtered :"<<a;               // Once its true it gives Output.

return 0;
}
