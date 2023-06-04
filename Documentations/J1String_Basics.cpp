#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;        

int main( ){
        string name;                    // Validate Lendth
        string profile;                 // empty or not
        string city;                        // clear
        name;                           //append 

        cout<<"Enter your Full Name : \n";
        std::getline(cin, name);

        if(name.length()>12 ){                          // Validate the Length of the name.
                cout<<"Your name cannot be more than 12 Char";}
        else{cout<<"Welcome "<<name<<endl;   }

        cout<<"Enter your Profile Name : \n";           // Validates either its entered or not
        std::getline(cin, profile);

        if(profile.empty() )
        {cout<<"Your Profile name is not entered";}
        else{  cout<<"Welcome "<<profile<<endl;}
        cout<<"\n-----============------------\n";
        cout<<"Enter your City Name : \n";
        std::getline(cin, city);
        cout<<"\n-----============------------\n";
        city.clear();                                               // Shoud be used in independent bcz" if" method eill give error
        cout<<"Your City name"<<city<<endl;
       city.erase(0,3);
       cout<<"My City Erased name :"<<city<<endl;
        cout<<"\n-----============------------\n";
       name.append("@outlook.com");
       cout<<"my mail is = "<<name<<endl;
        cout<<"\n-----============------------\n";
       name.at(0);                              // Index    (number of pace/index)
        cout<<"Index at : "<<name<<endl;
        cout<<"\n-----============------------\n";
          name.insert(6, "$");                              // Insert (at plce,  what to insert)
        cout<<"Inserted at : "<<name<<endl;
        cout<<"\n-----============------------\n";
        cout<<name.find('B')<<endl;             // Find (B Char in name)
        cout<<"\n-----============------------\n";


return 0;
}