#include<iostream>
#include<conio.h>


using namespace std;

int main(){

	   int num[100][100], filas, columnas;
	   char band= 'F';
	   
	   cout<<"Digita el numero de filas: ";
	   cin>>filas;
	   cout<<"Digite el numero de columnas: ";
	   cin>>columnas;
	   
	   for(int i=0; i<filas; i++){
	   	for(int j=0;j<columnas;j++){
	   		cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
	   		cin>>num[i][j];
	   	}
	   	cout<<"\n";
	   }
	   
	   //comprabando si la matriz es simetrica
	   
	   if(filas == columnas){
	   	for(int i=0; i<filas;i++){
	   		for(int j=0;j<columnas;j++){
	   			if(num[i][j] == num[j][i]){
	   				band = 'V';
	   			}
	   		}
	   	}
	   	
	   }
	   
	   if(band == 'V'){
	   	cout<<"La matriz es simetrica"<<endl;
	   }
	   else{
	   	cout<<"La matriz no es sietrica"<<endl;
	   }
	   



getch();

	return 0;
}

