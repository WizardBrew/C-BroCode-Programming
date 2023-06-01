#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
int age;
cout<<"Enter the age : ";
cin>>age;

        if (age>=100){
                cout<<"You Need to rest. ";
        }
        else if(age>=18){
                cout<<"Your are Qualified 18+ Club";
        }
        else if(age<18){
                cout<<"You are not Qualified Grow up";
        }
        else{
                cout<<"Your Input is not valid";
        }


return 0;
}