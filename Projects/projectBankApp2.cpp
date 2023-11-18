#include<iostream>
#include<iomanip>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void displayBalance(double balance);
double deposit();
double withdraw(double balance);
// string account(string name, string last_name, int age, int ac_No);

int main( ){
        double balance = 100;
        int choice = 0;
        string name,  last_name;
        int age,  ac_No;


        do{       
                // account(name, last_name, age,  ac_No);                
                cout<<"\n===========================\n";
                cout<<"|   --== ICICI Bank ==--   |    ";
                cout<<"\n===========================\n";
                cout<<" Enter the Choice - ";
                cin>>choice;
                // if (cin.fail()) {
                // cin.clear();  // Clear error flags
                // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
                // }
                cin.clear();
                fflush(stdin);
        
                switch(choice){
                        case 1: displayBalance(balance);
                                break;

                        case 2: balance += deposit();
                                displayBalance(balance);

                                break;

                        case 3: balance -= withdraw(balance);
                                displayBalance(balance);

                                break;

                        case 4: cout<<" Thanks for using ICICI Bank Services ";
                                break;

                        default: cout<<" Your have entered invalid ";
                }
        }while(choice !=4);


return 0;
}

void  displayBalance(double balance){
        cout<<"Your Balance is - "<<std::setprecision(2) <<std::fixed<<balance;

}
double deposit(){
        double amount = 0;
        cout<<" Enter the Amount you want to Deposit : ";
        cin>>amount;
        if(amount>0){
        return amount;
        }
        else{
                cout<<" You have invalid number \n";
                return 0;
        }
}
double withdraw(double balance){
        double amount;
        cout<<" Enter the Amount you want to Withdraw  : ";
        cin>>amount;
        if(amount<0){
                cout<<" Entered is amount is Invalid ";
                return 0;
        }
         
         else if(amount>balance){
                cout<<" Your Balance is not Sufficient ";
                return 0;
         }
         else{
                return amount;
         }


        
}

string account(string name, string last_name, int age, int ac_No){
        
        // string name, last_name;
        // int age; 
        // int ac_No;

        cout<<" Enter the Name : ";
        std::getline(cin>>std::ws, name);
        // cout<<" Enter the Last Name : ";
        // std::getline(cin>>std::ws,last_name);
        cout<<" Enter the Age : ";
        cin>> age;
        cout<<" Enter the Ac No : ";
        cin>>ac_No;
        cout<<" Enter the Last Name : ";
        std::getline(cin>>std::ws,last_name);
        
         
        return 0;
}