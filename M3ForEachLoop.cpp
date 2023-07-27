#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main( ){
        string subjects [] = {"English", "Science","Hindi", "Biology", "Physic", "Maths" ,"Games",};
        int serials[] = {1,2,3,4,5,6,7,8,9};

        for(string sub : subjects){
            cout<<sub<<'\n';
        }cout<<"end Sub \n";

        for(int num : serials){
                cout<<num<<'\n';
        }

return 0;
}