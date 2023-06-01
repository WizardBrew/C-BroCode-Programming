#include<iostream>

using std::cout;                                        // Instead of using std::cout
using std::string;
using std::cin;
using std::endl;                                


int main(){
       string yes;                      // Decleartion 
        cout<<"This is User input Prog, Plz type yes\n";        // Dispaly OP 
        cin>>yes;                               // Take User input.
        
        string fn, mn, sn;      
        cout<<"Type and enter - firstname, middle name, surname\n";
        cin>>fn>>mn>>sn;                // Multiple Input after each space it will take new input.

        cout<<"First Name: "<<fn <<" Midle Name: "<<mn<<" Surname : "<<sn<<endl;

        return 0;
}