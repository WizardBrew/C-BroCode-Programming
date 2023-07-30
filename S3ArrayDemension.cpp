#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

void sort(int array[], int size);

int main( ){

        int array[] = {10 , 1 , 9 , 2 , 8 , 3 , 7 , 4 , 6 , 5};         // My Unsorted Array
                int size = sizeof(array)/sizeof(array[0]);      // Defining the size of array or it will be pointer 
                sort(array, size);                                                              // invoke function
                for(int element : array){                               // This loop allows only to give spaces between elements
                        cout<<element<<"  ";
                }



return 0;
}
void sort(int array[], int size){                       // Sort Func of 2D Array
        for(int i = 0; i<size -1; i++){                         // int i will check the size and -1 bcz last one will be sorted greater
                for(int j = 0; j<size- i - 1; j++){             // i -- element will loop with j element and size -i(counter) -1 sorted num at last
                        if(array[j] > array[j+1]) {             // check condition j and beside j(J+1) is greated or no and exchange place
                        int temp = array[j];                            // assign temp place and swap
                        array[j] = array[j +1];        
                        array[j+1] = temp;              
                        }
                }
        }
}


