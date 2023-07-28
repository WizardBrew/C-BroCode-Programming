#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

double sumOfArray(double calcArraySet[], int size);

int main( ){

double calcArraySet[] = {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(calcArraySet)/sizeof(calcArraySet[0]);
double sum = sumOfArray(calcArraySet, size);

cout<<" the sum of Array is $ - "<<sum;

return 0;
}

double sumOfArray(double calcArraySet[], int size){
        double sumup = 0;
        for(int i = 0 ; i < size; i ++){
                        sumup += calcArraySet[i];
                        cout<<calcArraySet[i]<<'\n';
        }
        return sumup;

}

