#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;


double getTotal(double prices[], int size);

        int main( ){

                double prices[] = { 49.99 , 15.05 , 75, 9.99};
                double size = sizeof(prices)/sizeof(prices[0]);
                double total = getTotal(prices, size);
                        cout<<" $ "<< total;

        return 0;
}

        double getTotal(double prices[], int size){
                double sum = 0;
                        for(int i =0; i<size; i ++){
                                sum = sum + prices[i];
                        
                }

                return sum;
}


