#include<iostream>
#include<cmath>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
double a, b, c;

cout<<"Enter the side A :";
cin>>a;
cout<<"Enter the side B :";
cin>>b;
           //---=== Method 1 ==----/
// a = pow(a,2);
// b = pow(b,2);
// c = sqrt(a + b );
// cout<<"Side C : "<<c<<endl;
                 //---=== Method 2 ==----/
cout<<"Side C :"<<sqrt(pow(a,2)+ pow(b,2))<<endl;

return 0;
}