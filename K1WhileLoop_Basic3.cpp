#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        int a;                                  // int decleare
        int num =1;                     // declear and initilize the starting point
        cout<<"Enter the Number : \n ";         
        cin>>a;                             // Input


        while (num<=10){
                cout<<a <<"X" << num <<" = "<<a*num<<endl;              // input -- x -- num(loop from 1 till 10) -- input * num 
                num++;                          // incremental of num so it ends till 10
        }

return 0;
}