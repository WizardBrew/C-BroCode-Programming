#include<iostream>

namespace first{                                           // same variable can be used in different namespace.
        int value = 10;}
namespace second{
        float value = 20.50;}
namespace third{
        char value = 'X';}
namespace forth{
        std::string value = "Wizard";}
namespace{
        bool value = false;}
int main(){
        using namespace first;                          
        float value = 50.80;

        std::cout<<value  << std::endl;

        std::cout<<first::value<< std::endl;
        std::cout<<second::value<< std::endl;
        std::cout<<third::value<< std::endl;
        std::cout<<forth::value<< std::endl;

        return 0;
}