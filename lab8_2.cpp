#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int n,int m){
	int i,j;
	if(n<=0||m<=0){
		cout << "Invalid input";
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout << "O";
		}
		cout << "\n";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
