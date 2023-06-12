#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){

        int i, j, n = 5;
        cout << "Enter the number of rows: ";
        // cin >> n;
        for(i=0; i<=n; i++)
        { 
                for(j=1; i>=j; j++)
                {
                cout << "*";
               
                }
                cout << endl;
        }
        return 0;
}

// void ClearMethod(){
//          string name ;
//           while(name.empty()){
//                 cout<<"Its Empty Please Enter your name : ";
//                 getline(cin, name);
//         }
//         cout<<"Hey - "<<name;
// }

// void swapstring(){
//          string name =  "Wizard";
//         string name2 = "Brew";
//         int a= 5, b =6;
//         string x;
//         //     name.swap(name2);    // Method 1
//               std::swap(name, name2); // Method 2
//               cout<<name<<"\n";
//               cout<<name2<<'\n'  ; 
// }


void precisions(){
         // double a = 6.352356663353535;
        // std::cout.precision(8);
        // std::cout << a << std::endl;
}