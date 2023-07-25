#include<iostream>
#include<ctime>

using std::cout;
using std::string;
using std::cin;
using std::endl;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char palyer, char computer);


int main( ){
       char player;
       char computer;


       player =    getUserChoice();
       cout<< "\n Your Choice is - ";
       showChoice(player);

       computer = getComputerChoice();
       cout<<"\n Computer Choice  is - ";
        showChoice(computer);
        chooseWinner( player,  computer);
        

}


char getUserChoice(){
         char player;
        char choice;
        do{
        cout<<"Game - Rock - Papper - Scissors";
        cout<<"\n----------------------------------\n";
        cout<<" - = Choose one of the Following = -";
        cout<<"\n R - Rock || P -  Papper || S- Scissors\n --> ";
        cin>> player;
               
        }while(player != 'r' && player != 'p' && player != 's');

       


return player;
}

char getComputerChoice(){
        srand(time(NULL));
        int num = rand()%3 +1;
         switch(num){
                case 1: return 'r';
                case 2: return 'p';
                case 3: return 's';
        }
        return 0;
}

void showChoice(char choice){
           switch(choice){
                case 'r': cout<<"you Choose  ""R"" - Rock \n"; 
                        break;
                case 'p': cout<<"you Choose ""P""- Paper \n";
                        break;
                case 's': cout<<"you Choose  ""s""- Scissor \n";
                        break;
        }
}
void chooseWinner(char player, char computer){
        switch(player){
                case 'r' : if(computer == 'r'){
                                cout<<" Its tie -- case 1";
                                }
                                else if(computer == 'p'){
                                        cout<<" You Loose --case1";
                                }
                                else {
                                        cout<<" you Win -- case1";
                                }
                break;

                case 'p' : if(computer == 'r'){
                                cout<<" you Win -- case2";
                                }
                                else if(computer == 'p'){
                                        cout<<" Its tie -- case 2";
                                }
                                else {
                                        cout<<" You Loose --case2";
                                }
                break;

                case 's' : if(computer == 'r'){
                                cout<<" You Loose --case3";
                                }
                                else if(computer == 'p'){
                                        cout<<" you Win -- case3";
                                }
                                else {
                                        cout<<" Its tie -- case 3";
                }break;
        }

}
