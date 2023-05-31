#include<iostream>


int main(){
        //Print my name : Age : WorkExp : WorkClass : salary.

         
        std::string name = "wizard Brew";       // String
        int age = 30;                                                   // int for Whole Number 
        float workExp = 8.5;                                    // float with decimal.
        double salary = 12.50500;                               //decimal with large numbers
        char workCls = 'A';                                             // single Character.


        std::cout<<"My Name is -"<<name<<" I am - "<<age<<" I have worked in IT for - "<<workExp<<std:: endl;
        std::cout<<"Since i have been smart i got - "<<workCls <<" And salary has been roughly by - "<<salary;

        return 0;
}