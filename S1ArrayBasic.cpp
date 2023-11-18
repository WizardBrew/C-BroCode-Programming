#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void albs(){
        string album[3];                // Always Define size if you want to set elements later
        album[0] = "Doorie";
        album[1] = "Jannat";
        album[2] = "Khuda"; 
        
        cout<<album[0]  <<"\n";
        cout<<album[1] <<"\n";
        cout<<album[2] <<"\n";
}
void musics(){
        string music[] = {"Aatif Aslam", "KK", "Rahat Fathe", "Darshan Rawal", "Sonu Nigam"};

        cout<<music[0] << '\n';
        cout<<music[1] << '\n';                
        cout<<music[2] << '\n';        
}

int main( ){ 

        albs();
        cout<<'\n';
        musics();


return 0;
}