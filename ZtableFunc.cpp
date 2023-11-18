#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void instructs();
double tables(int num0, int num1);

int main( ){
int num0, num1;
instructs();
tables(num0, num1);

return 0;

}

void instructs(){
cout<< "The Tables are Printed below \n =======================";

}

double tables(int num0, int num1){
        cout<<"\nEnter Num0 - ";
        cin>>num0;
        cout<<"Enter num1 - ";
        cin>>num1;
        
        cout<<" Your Table for "<<num0<<" & "<<num1<<endl;

                for(int i = 1 ; i <=10; i++){
                        for(int j=1; j<=1; j++){
                                cout<<num0 <<" x " << i<<" = " <<i*num0<<"      || ";
                                for(int k=1; k<=1; k++){
                                        cout<<num1 <<" x " <<i <<" = " <<i*num1<<"      || ";
                                }cout<<endl;
                        }
                }cout<<" Printed \n";
        
        return 0;

}