#include<iostream>

int main(){
        int student = 4;

        student = student + 2;                  //Addition- Metehod 1
        student ++;                                                      // Only if want to add 1 in incremental order
        student +=2;                                   // Method 2

        student --;                                     // decrease 1, 1 by order
        student = student - 2;                 // Substract Method 1
        student -=2;                                    // Method 2

        student = student * 2;                  // Multi Method 1 and 2
        student*=2;

        student = student /= 2;                 // Division Method 1 and 2
        student /=2;

        student = student % 2;                  // General term - Reminder method 1 and 2
        student %=2;

        std::cout<<student<<std:: endl; 
        std::cout<<student<<std:: endl; 
        std::cout<<student<<std:: endl;

        return 0;
}