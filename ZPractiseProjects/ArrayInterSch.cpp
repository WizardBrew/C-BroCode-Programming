#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int mysearch(string searchs[], int size, string elements);

int main( ){
        string inputs;
        int index;
        cout<<"Enter here - \n";
        cin>>inputs;
        string searchList[] = {"Apple", "Bravo", "Charlie", "Delta", "Echo"};
                int size = sizeof(searchList)/sizeof(searchList[0]);
                for(int i = 0; i <size; i++){
                        cout<<searchList[i]<<'\n';
                }
                index = mysearch(searchList, size, inputs);
                if(index!= -1){
                        cout<<"Your input "<<inputs<< " your index "<<index;
                }
                else{
                        cout<<" Entered is not in list ";
                }
return 0;
}
int mysearch(string searchs[], int size, string elements){
        for (int i =0 ; i<size ; i ++){
                if(searchs[i]== elements){
                return i;
                }
        }
        return -1;
}




