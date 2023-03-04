#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
	
	int numero, dato, contador=0;
	
	srand(time(NULL)); //generador de numero aleatorio
	dato = 1 + rand() % (100);
	
	do{
		
		cout<<"Digita un numero: ";
		cin>>numero;
		
		if(numero > dato){
			cout<<"\nDigita un numero menor\n";
			
		}
		
		if(numero < dato){
			cout<<"\nDigita un numero mayor\n";
		}
		
		contador ++;
		
	}while(numero != dato);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	
	
	
	
	
	return 0;
}
