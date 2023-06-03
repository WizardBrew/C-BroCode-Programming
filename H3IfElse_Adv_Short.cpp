#include<iostream>

using namespace std;

int main(){
        int grade = 30;
        int numcheck =41;
        bool hungry = true;

        grade >=40 ? cout<<"You Pass " : cout<<" You Fail ";
        numcheck % 2== 1 ? cout<<" Odd Number " : cout<<" Even ";
        hungry ? cout<<" You are Hungry " : cout<<" You are Full ";

        cout<<"\n-------------------------------------------------------\n";
        
        cout<<(grade>=40? "Passed in Exam ": " try again ");
        cout<<(numcheck %2 ==1 ? "Odd Num " : "Even num ");
        cout<<(hungry ? " You can have Pizza " : "You can try Juice ");
        


        cout<< endl;

        return 0;
}