#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int deposit();
int withdrawal(int balance);
void showBalance(int balance);

int main()
{
        int balance = 100;
        int choice;

        do{
        cout << "\nBanking Appliction Practise";
        cout << "\n-----------------\n";
        cout<<"Enter the Choice\n";
        cin>>choice;
        cin.clear();
        fflush(stdin);
        switch(choice){
                case 1: showBalance(balance);
                        break;
                case 2: balance += deposit();
                        cout<<"After deposit your Balance - ";
                        showBalance(balance);
                        break;
                case 3: balance -= withdrawal(balance);
                        cout<<"After Withdraw your Balance - ";
                        showBalance(balance);
                        break;
                case 4: cout<<"Thanks for visiting \n";
                        break;
                default: cout<<" Please Enter the Valid number ";
                        break;
        }
        }while(choice != 4);
        return 0;
}
int deposit(){
        int amount;
        cout<<"Enter the Amount to Deposit - ";
        cin>>amount;
        if (amount <0){
                cout<<" Enter the Valid Amount no deposit made  \n";
                return 0;
        }
        else{
                return amount;
        }

        // return 0;
}

int withdrawal(int balance){
        int amount;

        cout<<"Enter the Amount to Withdraw - ";
        cin>>amount;
        if(amount >balance){
                cout<<"Enter the Valid amount, you cannot withdraw more than your balance\n";
                return 0;
        }
        else if (amount <0){
                cout<<"Invalid Amount - ";
                return 0;
        }
        else{
                return amount;
        }
}

void showBalance(int balance){
        cout<<"Your Balance is -=|[ "<<balance<<" ]|=-\n";
}
