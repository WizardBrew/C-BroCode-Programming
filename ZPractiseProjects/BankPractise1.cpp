#include<iostream>
#include<iomanip>
#include <limits>

using std::cin;
using std::cout;
using std::string;

void showBalance(double balance);
double deposit(double amount);
double withdraw(double amount);
void dataBase(string name, int ac_No);

int main(){
double balance = 100;
int choice = 0;

    do{
        cout<<"\n <--===- Banking Application -===-->\n";
        cout<<"---- ------------- ----\n";
        cout<<" 1 --> Show Balance\n";
        cout<<" 2 --> Deposit\n";
        cout<<" 3 --> Withdrawl\n";
        cout<<" 4 --> Exit\n";

        cout<<"\n\nEnter the input Here ==> ";
        cin>>choice;
        if (cin.fail()) {
            cin.clear();  // Clear error flags
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
        }
        // std::cin.clear();
        // fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
            break;
            case 2: balance += deposit(balance);
                    showBalance(balance);
            break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
            break;
            case 4: cout<<"Exited";
            break;
            default: cout<<"\n=== Enter Valid Choice between 1 - 4 ===\n";
            break;
        }

    }while(choice!=4);

    return 0;
}

void showBalance(double myBalance){          //bal func
        cout<<"Your Balance is  --> "<<std::setprecision(2)<<std::fixed<<myBalance <<"\n";
};

double deposit(double myBalance){
    double amount = 0;
    cout<<"Please enter the amount for Deposit ==> ";
    cin>>amount;
    if(amount<0){
    cout<<"\nEnter the Valid Amount\n";
    return 0;
    }
    else {
    return amount;
    }
    
}

double withdraw(double myBalance){
    int amount;
    cout<<"Please enter the anount for Withdrawl ==> ";
    cin>>amount;
    if(amount<0){
    cout<<"\nEnter the valid Amount\n";
    }
    else{
    return amount;
    }
    return 0;
}

// void dataBase(string name[], int ac_No){
// name[] = 



// }

