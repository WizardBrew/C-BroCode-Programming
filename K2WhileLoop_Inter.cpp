#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string name;
        string name1;
        
        cout<<"Enter Here :"; cin>>name1;               //takes input
                if (name1 == "Loop"){                                 // checks condition 
                        while(name.empty()){                            // checks if the Name inp is empty
                        cout<<"Enter the Name \"You cannot keep it Empty\" :\n";
                        getline(cin,name);              // if its empty then again asks for inp
                }               
                cout<<"Hey Hi :"<<name;         // Takes input
        }
        else{
                cout<<"Ok got it you need something else :";
        }        


return 0;
}