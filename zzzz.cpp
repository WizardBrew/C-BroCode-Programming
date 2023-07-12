#include<iostream>
using namespace std;
int main(){
	int a, b,c, d ;
	cin>>a>>b>>c>>d;

	for(int i=1 ; i<=10; i++){
		for(int j=1 ; j<=1; j++){
			cout<<a<<"X"<<i<<"="<<a*i<<" || ";
			for(int k=1 ; k<=1; k++){
				cout<<b<<"X"<<i<<"="<<b*i<<" || ";
				for(int j=1 ; j<=1; j++){
				cout<<c<<"X"<<i<<"="<<c*i<<" || ";
					for(int k=1 ; k<=1; k++){
						cout<<d<<"X"<<i<<"="<<d*i<<" || ";
						}	
                                                // cout<<endl;
				}	
                                // cout<<endl;
		}	cout<<endl;
//			cout<<a<<"X"<<i<<"="<<a*i<<"  ";
		}	//cout<<endl<<endl;
	}
	
	
	
	
}

/*
	*	*
	*	*
	*	
	*
	*
*/
