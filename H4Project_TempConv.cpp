#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        double temp;
        char unit;

        cout<<"---------=== Temp Conv Option =======--------\n";
        cout<<"F is Fehrenheit :\n";
        cout<<"C is Celsius :\n";
        cout<<"What you like to convert :";
        cin>>unit;
        cout<<"---------=== Temp Conv =======--------\n";
        if (unit == 'F'  || unit == 'f'){
                cout<<" The Temp is Plz enter the value in Celsius:  ";
                cin>>temp;
                temp = (1.8 * temp) +32.0;
                cout<<"The result is "<<temp<< "F\n";
        }
        else if (unit == 'C'  || unit == 'c'){
                cout<<" The Temp is Plz enter the value Fehernhiet:  ";
                cin>>temp;
                temp = (temp - 32) /1.8;
                cout<<" The result is "<<temp<<"C\n";
        }
        else{
                cout<<"Please Enter only C/F";
        }
        cout<<"\n--------=======End ======--------\n";

        return 0;
}