
#include<iostream>

using namespace std;

	int searchList(string sArray[], int size, string searchs);
 
int main(){
	
	int indexN;
	string mySearch;
	cout<<"Enter the Search you want to check\n-- ";
	getline(cin>>std::ws, mySearch);
	
	string food[] ={"Pizza", "Garlic Bread", "Spegattie", "Maggie", "Passta"};
		int size = sizeof(food)/sizeof(food[0]);
		
			for(int i = 0; i<size; i++){
				cout<<food[i]<<'\n';
			}
			
		indexN = searchList(food, size, mySearch);
		if(indexN != -1){
			cout<<"This is the INDEX of "<<indexN;
		}
		else{
			cout<<"The Invalid Search\n";
		}
	
	
	return 0;
}

	int searchList(string sArray[], int size, string searchs){
			for(int i = 0; i <size; i ++){
				if(sArray[i] == searchs){
					cout<<"found\n";
					return i;
				}
			}    
		return -1;
	}


