#include<iostream>
#include<cmath>

int main(){
        //Print my name : Age : WorkExp : WorkClass : salary.

         
        std::string name = "wizard Brew";       // String
        int age = 30;                                                   // int for Whole Number 
        float workExp = 8.5;                                    // float with decimal.
        double salary = 12.50545;                               //decimal with large numbers 
                                                                // --== The value changes ill how to get exact by - Salary.precision(5)
        char workCls = 'A';                                             // single Character.

        char lastname[] = "C ++ is Best";                // Array method just for an idea ill get this more later

        std::cout<<"My Name is -"<<name<<" I am - "<<age<<" I have worked in IT for - "<<workExp<<std:: endl;
        std::cout<<"Since i have been smart i got - "<<workCls <<" And salary has been roughly by - "<<salary;

        // ----==You can Ignore this part ill cover it later.
        std::cout<<" \n--------------\n ";
        std::cout.precision(8); 
        std::cout<<salary;
        
        std::cout<<"\n --------------\n ";
        std::cout<<lastname;
        return 0;
}