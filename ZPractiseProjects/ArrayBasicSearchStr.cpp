#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int searchData(const string& input);


int main() {
        string enterSearch;
        cout << "Enter the Search Here: ";
        getline(cin >>std::ws,  enterSearch);

        int foundIndex = searchData(enterSearch);
                if (foundIndex != -1) {
                        cout << "Found " << enterSearch << " at index " << foundIndex << " in the database." << endl;
                }
                else {
                cout << "Entered string not found in the database." << endl;
                }
        return 0;
}

int searchData(const string& input) {
        string myArray[] = {"One", "Two", "Three", "Four", "Five"};
        int size = sizeof(myArray) / sizeof(myArray[0]);
                for (int i = 0; i < size; i++) {
                        if (input == myArray[i]) {
                                return i;
                }
        }   
        return -1; // Return -1 if the input is not found in the database
}
