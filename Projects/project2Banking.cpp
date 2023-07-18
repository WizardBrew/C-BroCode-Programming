#include<iostream>
#include<iomanip>

using std::cout;
using std::string;
using std::cin;
using std::endl;

double showBalance(double balance);
double deposit();
double withdrawal(double balance);

int main( ){
       double balance = 786.786 ;
        int choice = 0;

        do{      
                cout<<"The Banking Application \n";
                cout<<"======================= \n";
                cout<<"  1. | Show Balance \n";
                cout<<"  2. | Deposit Amount  \n";
                cout<<"  3. | Withdraw  \n";
                cout<<"  4. | EXIT \n";
                
                cin>>choice;
                cin.clear();
                fflush(stdin);

                switch(choice){
                        case 1 : showBalance( balance);
                                        break;
                        case 2 : balance = balance + deposit();

                                        showBalance(balance);
                                        break;
                        case 3 : balance = balance - withdrawal(balance);

                                        showBalance(balance);
                                        break;
                        case 4 :  cout<<"Thanks for visiting \n";
                                break;
                        default: cout<<"Invalid Choice \n";
                }
        } while (choice != 4);

        return 0;
}

double showBalance(double balance){
        cout<<"Your Balance is - $ "<< std::setprecision(2)<<std::fixed<<balance<<'\n';
        return 0;
}
double deposit(){
        double amount = 0;
        cout<<"Enter the amount you want to Deposit --> ";
        cin>>amount;
        
        if(amount>0){
                 return amount;
        }
        else{
                cout<<"You are not entering the Valid Amount ";
                return 0;
        }
}
double withdrawal(double balance){
        double amount = 0;
        cout<<"Enter the amount you want to Withdraw --> ";
        cin>>amount;

        if(amount>balance){
                cout<<"Your amout is insufficient to withdraw - ";
                return 0;
        }
        else if (amount<0){
                cout<<"Invalid Amout ";
                return 0;
        }        
        else{
                return amount;  
        }

}