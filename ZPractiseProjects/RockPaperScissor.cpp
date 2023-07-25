#include<iostream>
#include<ctime>

using std::cout;
using std::string;
using std::cin;
using std::endl;

char playerChoice();
char computerChoice();
void showchoice(char choice);
void showWinner(char player, char computer);

int main( ){
        char player;
        char computer;

               player =  playerChoice();
                cout<<"Your Choice -  "<<player;
                showchoice(player);
                computer = computerChoice();
                cout<<"\nComputer Choice - "<<computer;
                cout<<"\n-------------------\n";
                showWinner( player, computer);

        return 0;
}

char playerChoice(){
        char player;
        char choice;
        do{
        cout<<" -= Rock Papper Scissor =- ";
        cout<<" \n ------------------------------ \n ";
        cout<<"  -= R=- | -= P =- | -= S =- \n";
        cin>>player;
        }while(player != 'r' && player != 'p' && player != 's');

        return player;
}

char computerChoice(){
        int num;
        srand(time(NULL));
        num = rand() %3 +1;
        switch(num){
                case 1: return 'r';
                case 2: return 'p';
                case 3: return 's';
        }

        return 0;
}
void showchoice(char choice){
        switch(choice){
                case 'r': cout<< " Your Choose -=Rock=- ";
                        break;
                case 'p' : cout <<" You Choose -=Papper=- ";
                        break;
                case 's' : cout<<" You Choose -=Scissor=- ";
                        break;
        }
}

void showWinner(char player, char computer ){
        switch(player){
                        case 'r' : if(computer == 'r'){
                                                cout<<"Its Tie";
                                        }
                                        else if(computer == 's'){
                                                cout<<" your loose";
                                        }
                                        else{
                                                cout<<" You Win ";
                                        }
                                break;

                        case 's' : if(computer == 'r'){
                                                cout<<" You Win ";
                                        }
                                        else if(computer == 's'){
                                                cout<<"Its Tie";
                                        }
                                        else{
                                                cout<<" your loose";
                                        }
                                break;
                        case 'p' : if(computer == 'r'){
                                                cout<<" your loose";
                                        }
                                        else if(computer == 's'){
                                                cout<<" You Win ";
                                        }
                                        else{
                                                cout<<"Its Tie";
                                        }
                                break;
        }
}


