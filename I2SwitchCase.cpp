#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        char grades;
        cout<<"Enter the Grade to Confirm the Range of Percent \n :";
        cin>>grades;

        switch (grades)
        {
        case 'A':
               cout<<"The Range of A is [100 - 85 ]";            /* code */
                break;
        case 'B':
               cout<<"The Range of A is [85 - 60 ]";            /* code */
                break;
        case 'C':
               cout<<"The Range of A is [60 - 35 ]";            /* code */
                break;
        
        default:
                cout<<" The Range is over not Qualified Try again :";
                break;
        }


return 0;
}