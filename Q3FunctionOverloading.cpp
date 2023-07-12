#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

string sauce = "Cheese";

void bakepizza();
void bakepizza(string topping);
void bakepizza(string topping, string topping1);
void bakepizza(string topping, string topping1, string sauce);

int main( ){
        bakepizza();
        bakepizza("Mashroom");
        bakepizza("Mashroom ", " Mozrilla ");
        bakepizza("Mashroom ", " Mozrilla ", "Mayonies");
}

void bakepizza(){
        cout<<"Here is your Pizza!! \n";}

void bakepizza(string topping){
        cout<<"Here is the "<<topping <<" pizza \n";}

void bakepizza(string topping, string topping1){
        cout<<"Here is the " <<topping <<" and "<<topping1 <<" pizza \n";  }

void bakepizza(string topping, string topping1, string sauce){
        cout<<"Here is the " <<::sauce << ' '<<topping <<" and "<<topping1 << " with " << sauce <<" pizza \n";  }