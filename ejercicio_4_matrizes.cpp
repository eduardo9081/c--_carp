//hacer una matriz preguntando al usuario el numero de columnas y filas, llenarla de numeros aleatorios,copiar el contenido a otra matiz y mostrarla

#include<iostream>
#include<conio.h>


using namespace std;

int main(){

       int num_1[100][100], filas,columnas;
       int num_2[100][100];
       
       cout<<"Dijite el numero de filas: ";
       cin>>filas;
       cout<<"Dijite el numero de columnas: ";
       cin>>columnas;
     
	   
       //almacenando elemntos
       for(int i=0;i<filas;i++){
       	for(int j=0;j<columnas;j++){
       		cout<<"Ingrese los elemntos que va a tener la matriz ["<<i<<"]["<<j<<"]: ";
       		cin>>num_1[i][j];
       	}
       	cout<<"\n";
       }
       
       //copiando elentoa
       
       for(int i=0;i<filas;i++){
       	for(int j=0;j<columnas;j++){
       		num_2[i][j] = num_1[i][j];
       	}
       }
       
       //mostrando matriz
       
       for(int i=0;i<filas;i++){
       	for(int j=0;j<columnas;j++){
       		cout<<num_2[i][j];
       	}
       	cout<<"\n";
       }




	return 0;
}

