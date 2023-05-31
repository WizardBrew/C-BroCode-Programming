#include<iostream>

                                // Typecasting of data 
                                        //1 - Implicity   -- Automatic 
                                        // 2 - Explicity  -- precede Value with new data type  
int main(){

        double x = 50.45;
       std:: cout<<(int)x<< std::endl;
// ------------------------------------------//
        int y =100;
        std::cout<<(char)y <<std::endl;
        std::cout<<(char)  100 <<std::endl;
 //------------------------------------------------------//
        int correct = 8;                        // Answers 8 correct
        int questions = 10;                     // Questions 10

        double score = (double)correct/questions *100;          // 8/100 = 0.8 as its int it shows = 0
                                                                                                                // but casting one of them in double will work 

        std::cout<<score<<"%"<<std::endl;

        return 0;
}