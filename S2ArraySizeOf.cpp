#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;



int main( ){

char grades[] = {'A', 'B', 'C', 'D', 'E','F', 'G','H', 'I'};

for(int i = 0; i<sizeof(grades)/sizeof(char); i++){
        cout<<i<<" - "<<grades[i]<<'\n';        // repeats the Arrray
        cout<<i<<" - "<<grades[i-2]<<'\n';      // Char value before A - 2 refer chart
        cout<<i<<" - "<<grades[i-5]<<'\n';
        // cout<<i<<" - "<<grades<<'\n';
}
 
return 0;
}