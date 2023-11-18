#include<iostream>
#include<iomanip>

using std::cout;
using std::string;
// using std::cin;
using std::endl;
// Required Basic things - Balance - Deposit - Withdraw
void displayBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main(){
        // balance - my choice
        double balance= 100;
        int mychoice =0;

        do{             // putting in do while so instead of repeating effort it can automate
                cout<<"\n----------------------------------\n";                         // Display options
                cout<<"    ---== State Bank Of India ==--   \n";        // 
                cout<<"    ------------------------------  \n";                                 
                cout<<"    1 : Balance   \n";
                cout<<"    2 : Deposit   \n";
                cout<<"    3 : Withdraw   \n";
                cout<<"    4 : Exit   \n";
                cout<<"==================================\n";           
                std::cin>>mychoice;          // take my choice 
                // if (cin.fail()) {
                // cin.clear();  // Clear error flags
                // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
        // }
                std::cin.clear();                    // clears Input
                fflush(stdin);                   // Flushes the stream and space

                switch (mychoice){              // entering the switch as displayed 
                        case 1 : displayBalance(balance);       // Logic for main Balance
                                // return  balance;//             // Never Return anything in switch or it will break the loop
                                break;
                        case 2 : balance += deposit(balance);   // Logic for deposit
                                displayBalance(balance);                // display my bal
                                break;
                        case 3: balance -=withdraw(balance);    // logic for withdraw
                                displayBalance(balance);                    // my bal
                                break;
                        case 4: cout<<"Thanks for Visiting State Bank \n";      //exit
                                break;

                        default: cout<<"Please Enter the Valid Choice ";        // invalid key
                                break;
                }
        } while (mychoice !=4);         // if i enter the 4 the loop will terminate

        return 0;       // if all the above is right it will return 0
}

void displayBalance(double myBalance){          //bal func
        cout<<"Your Balance is  - "<<std::setprecision(2)<<std::fixed<<myBalance <<"\n";
};
double deposit(double myBalance){       // Deposit Func
        double amount= 0;                       // Local var
        cout<<"Enter the amount you want to Deposit - ";
        std::cin>>amount;            // take input as local
        if(amount<0){                   // define condition
                cout<<"Your Input was Invalid ";
                return 0;               // if condition is meet return 0 ----- return is needed as its not -- void func    
        }
        else{ return amount;    // if condition meet return 0==
        }
};
double withdraw(double mybalance){      // logic for withdraw
        double amount = 0;              // local var
        cout<<"Enter the amount you want to Withdraw - ";
        std::cin>>amount;            // input
        if(amount>mybalance){                   // if condition is meet return 0 ----- return is needed as its not -- void func    
                cout<<"You do not have sufficient Balance \n";
                return 0;
        }
        else if (amount<0){
                cout<<"Enter the Valid Amount not Negative - ";
                return 0;
        }
        else{
                return amount;
        }               

        return 0;
};