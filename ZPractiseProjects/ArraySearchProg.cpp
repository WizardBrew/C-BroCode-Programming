#include<iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(){

double ArraySearch[] = {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(ArraySearch)/sizeof(ArraySearch[0]);


cout<<size<<'\n';
cout<<ArraySearch[5];
for(int i = 0; i<size; i++){
cout<<'\n';
cout<<i <<" -- "<<ArraySearch[i];
cout<<"\n";
}




}



