#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;
 
int main( ){
        for (int i = 0; i <=10 ; i++) {                 // index i is 0 ; index i greater or equal till 10; kepp adding index ++
                cout<<i<<" Happy New Year! \n";         // if i is not 10 print go back and check the index again.
        }
        cout<<"---=== 2 ===------ \n";
           for (int j = 2; j <=10 ; j+=2) {             // index starting from 2 ; till index 10; keep adding +2
                cout<<j<<" Happy now! \n";      // Checks Index and print then again go backs to start.
        }
        

return 0;
}