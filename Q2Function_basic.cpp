#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;


void happyBirthday( string name, int age);      // Creating a function to initialize in main at start
                                        // the function should match the other function set of parameters --=== func(para, para)
int main( ){

        string name = "Wizard";         // the name we need to show should be defined in the main
        int age =30;                                    //  the age need to be defined which need to be dispayed 
        happyBirthday(name, age);      //  matching the local parameters into this functions rhat needs to be called.
                                                        // ---== func(Local para, Local para) ==---

return 0;
}

void happyBirthday(string nm, int ag){          // The Function that main looks for to implement 
        cout<<"Happy Bithday "<<nm <<" You are now "<<ag;       // when func is called this will be exceuted 
        cout<< "\n All the Best";

}