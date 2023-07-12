#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

string coldDrink = "Pepsi";

void bakePizza();
void bakePizza(string topping);
void bakePizza(string topping, string topping1);
void bakePizza(string topping, string topping1, string sauce);
void bakePizza(string topping, string topping1, string sauce, string base, string coldDrink );

int main( ){
// string topping, topping1, sauce, base;
bakePizza();
bakePizza("Mashroom");
bakePizza("Capcicum", "Tommato");
bakePizza("Chicken", "Grill chicken", "Mayonies" );
bakePizza("Mutton", "Chicken", "Mozrella", " SoftPanBase", "Coke" );

return 0;
}

void bakePizza(){
        cout<<"Here is the Plain Pizza as you like \n";}

void bakePizza(string topping){
        cout<<"Here is your Pizza with - "<<topping<<'\n'; }

void bakePizza(string topping, string topping1){
        cout<<"Here is your Large Pizza as requested -"<<topping<<" with " <<topping1<<'\n'; }

void bakePizza(string topping, string topping1, string sauce ){
        cout<<"Here is the Pizza with "<<topping <<" & "<<topping1 <<" added " <<sauce<<'\n';}

void bakePizza(string topping, string topping1, string sauce, string base, string coldDrink ){
        cout<<"Here is the Pizza with "<<topping <<" & "<<topping1 <<" added " <<sauce << " on "<< base<<" "<<coldDrink <<" Combo "<<::coldDrink;}