#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        char op;
        double firstnum;
        double secondnum;
        double result;

        cout<< "Enter the first number\n";
        cin>>firstnum; 
        cin>>op;
        cout<<"Enter second number\n";
        cin>>secondnum;
        

        switch (op){
        case '+' : result = firstnum+secondnum;
                        cout<< " result is -- "<<result;        
                        break;
        case '-' : result = firstnum-secondnum;
                        cout<< " result is -- "<<result;        
                        break;
        case '*' : result = firstnum*secondnum;
                        cout<< " result is -- "<<result;        
                        break;
        case '/' : result = firstnum/secondnum;
                        cout<< " result is -- "<<result;        
                        break;
        
        default:
                cout<<"Please enter the Valid one of four. ";
                break;
        }

return 0;
}