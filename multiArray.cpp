#include <iostream>
using namespace std;
int main(){
	int num[2][2];
	for (int i=0; i<2; i++){
		for (int k=0; k<2; k++){
			cout << "Enter Value"<<endl;
		  cin>> num[i][k];
		}
	}
	cout<<"The output is = ";
	
	for (int c=0; c<2; c++){
		for (int j=0; j<2; j++){
			cout<< num[c][j];
		}
	}
	
	
	return 0;
}