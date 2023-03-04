#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num[100];
	int n;
	
	cout<<"Digita el numero de elemtos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n; i++){
		cout<<"Digita un numero: ";
		cin>>num[i];
		
	}
	
	for(int i=0; i<n; i++){
		cout<<i<<"-> "<<num[i]<<endl;
	}
	
	getch();
	return 0;
}
