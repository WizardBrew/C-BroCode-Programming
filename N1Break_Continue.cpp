#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){ 
        
        for(int i = 1; i <=20; i++){
                if(i==13){
                        // cout<<"Reached Unlucky \n"; 
                        // break;
                        continue;
                } 
                cout<<i<<'\n';
        }

return 0;
}