#include<iostream>

int main(){
        int x;                                                   // int - integer, x is the Variable. 
        x = 10;                                                 // x =5 variable x value is 5.
        int y = 20;                                           // Other way to specify int.
        float z = 50.25;                                // float is always in decimals like 10.5 or 20.13 
        double  m = 100.60;                       // double is used for big value to store
        char a = 65;                                            // char is user to store single Characters like A - Z starts from 65 to 128 - ASCII chart
        std::string name =  "wizard";            // string holds the charaters in sequence.

        const double PI = 3.14159;                   // When you specify const the Value cannot be changed of Variable.
                                                                        // Const should be more often use if needed for better program

        std::cout<<x <<std::endl;               //we can ignore STD:: with a short trick if you need. 
        std::cout<<y <<std::endl;               //in next program you can see how
        std::cout<<z <<std::endl;
        std::cout<<m <<std::endl;
        std::cout<<a <<std::endl;

        return 0;
}