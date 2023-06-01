#include<iostream>

using std::cout;                                        // Instead of using std::cout
using std::string;
using std::cin;
using std::endl;                                


int main(){
        int age, workexp;                               // Declearation of integer
        string name, company, city, yes;             // Declearation of strings, so i can Direct initialze
        
        cout<<"This is User input Prog, Plz type yes\n";
        cin>>yes;
        
        cout<<"Enter your name  : \n";          // Asking the Question- Dispaly OP
        getline(cin>>std::ws, name);            // majorly Cin is used if there is no space.
        cout<<"Your Age : \n" ;                         // Age 
        cin>>age;                                                       // Enter the Age in OP
        cout<<"Enter your Company Details  :\n";        
        getline(cin>>std::ws, company );        // getline allows to take input of may words. using -ws 
        cout<<"Work Exp  :\n"; cin>>workexp;  // other way but I do not recomend it.
        cout<<"Enter the City name  : ";
        getline(cin>>std::ws, city);                    // WS is imp bcz it clears Buffer of the line whiteSpace

cout<<"-------- == Your Details ==------------------\n";
        cout<<"Name : "<<name<< endl;
        cout<<"age : "<< age<<endl;
        cout<<"Company : "<<company<< endl;
        cout<<"Work Exp : "<< workexp<<endl;
        cout<<"City : "<< city<<endl;
        cout<<"------== End ==----------\n"<<endl;


        return 0;
}