#include<iostream>
#include<ctime>

using std::cout;
using std::string;
using std::cin;
using std::endl;

char playerChoice();
char computerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);


int main( ){
        char choice;
        char player;
        char computer;
        
        player = playerChoice();
        cout<<"Your Choice is -- ";
        showChoice(player);
        cout<<" \n ----------------- \n";

        computer = computerChoice();
        cout<<"Computer Choice is -- ";
        showChoice(computer);
        cout<<"\n===========\n";

        showWinner(player, computer);

return 0;
}

char playerChoice(){
        char choice;
        do{
                cout<<" Game- =Rock- Paper - sicssor=";
                cout<<"\n-------------------------\n";
                cout<<"Choose - R | P | S - \n ";
                cin>>choice;
                choice = tolower(choice);
                cout<<"\n ==Your Entered ==-- "<<choice<<endl;
        }while(choice != 'r' && choice != 'p' && choice != 's');
        return choice;
}

char computerChoice(){
        srand(time(NULL));
        int num = rand()%3 +1;
        switch(num){
                case 1 : return 'r';
                case 2 : return 'p';
                case 3 : return 's';
        }
        return 0;
}

void showChoice(char choice){
        switch(choice){
                        case 'r' : cout<< 'r';
                                break;
                        case 'p' : cout<< 'p';
                                break;
                        case 's' : cout<< 's';
                        break;
                }
}

void showWinner(char player, char computer){

        switch(player){
                case 'r' : if(computer == 'r'){
                                cout<<" Its tie ";
                                }
                                else if(computer == 's'){
                                        cout<<" you Win ";
                                }
                                else {
                                        cout<<"you loose";
                                }
                break;
                case 's' : if(computer == 'r'){
                                        cout<<"you loose";
                                }
                                else if(computer == 's'){
                                        cout<<" you Win ";
                                }
                                else {
                                        cout<<" Its tie ";
                                }
                break;
                case 'p' : if(computer == 'r'){
                                        cout<<" you Win ";
                                }
                                else if(computer == 's'){
                                        cout<<"you loose";
                                }
                                else {
                                        cout<<" Its tie ";
                                }
                break;
        }
}




