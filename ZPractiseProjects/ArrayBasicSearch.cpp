#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;



int main( ){

        double myArray[] = {1,2,3,4,5,6,7,8,9,10};
        int size = sizeof(myArray)/sizeof(myArray[0]);
        int index;
        int myNum;
        int mysrch;
        cout<<"size =" <<size<<'\n';
        cout<<"There are total -= " <<size<<" =- Elements in Array \n -- ";

        cin >> myNum;

        for(int i = 0 ; i< size ; i ++){
                if (myArray[i]== myNum){
                        cout<<"\n Found your num -= "<<myNum<<" =- Element at -=> "<<i;
                        break;
                }cout<<"Checking -- "<<i<<'\n';
        }       return 0;

return 0;
        }