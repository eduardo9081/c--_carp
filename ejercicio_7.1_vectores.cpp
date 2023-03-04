#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int numero_1[100];
    int n;
    int numero_2[100];
    
    cout<<"Ingrese el numero de arreglos: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
    	cout<<i+1<<" Ingrse el numero que sera multiplicado por 2: ";
    	cin>>numero_1[i];
    }
    
    for(int i=0; i<n; i++){
    	numero_2[i] = numero_1[i] * 2;
    	
    }
    
    for(int i=0; i<n; i++){
    	cout<<"\nnumero "<<i+1<<": "<<numero_2[i]<<endl;
    }


   getch();

	return 0;
}

