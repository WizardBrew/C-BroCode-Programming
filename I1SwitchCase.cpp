#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
int daysNo;
cout<<"Enter the week Day no as Sunday is 1 : -- > ";
cin>>daysNo;

        switch (daysNo)
        {
        case 1:
               cout<<" Its Sunday";
                break;
        case 2:
               cout<<" Its Monday";
                break;
        case 3:
               cout<<" Its Tuesday";
                break;
        case 4:
               cout<<" Its Wednesday";
                break;
        case 5:
               cout<<" Its Thursday";
                break;
        case 6:
               cout<<" Its Friday";
                break;
        case 7:
               cout<<" Its Saturday";
                break;

        default:
                cout<<"YOu Entered out of 1 - 7 days";
                break;
        }
return 0;
}
