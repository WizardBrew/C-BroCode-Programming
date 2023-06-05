#include<iostream>
                                // Old data typedef than new one which is --  using 
                // Method --1.                            
// typedef std::string name_t;                             // specify thich typeof data type it is.
// typedef int age_t;                                                      // alwasy use  _t  to mention type.
// typedef float workExp_t;
// typedef char grade_t;
//=====  Comment down Above Method one or method 2  Result same==============//
                //Method -- 2
        using name_t = std::string;                     // by using we can use the variable  assignment 
        using age_t = int;                                      // it can be any variable assign it using xyz = string 
        using workExp_t = float;                        // this above xyz will be string data type.
        using grade_t = char;

int main(){

        name_t name = "Wizard";                         //user those data type which have specified 
        age_t age = 30;
        workExp_t workExp = 6.5;
        grade_t grade = 'A';

        std::cout<<name << std::endl;
        std::cout<<age << std::endl;
        std::cout<<workExp << std::endl;
        std::cout<<grade << std::endl;

        return 0;
}