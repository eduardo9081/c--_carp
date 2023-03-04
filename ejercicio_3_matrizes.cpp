#include<iostream>
#include<conio.h>


using namespace std;

int main(){

       int num[2][2] = {{1,2,},{3,4}};
       int matriz_2[2][2];
       //pasando el contenido de num asia matriz_2
       for(int i=0;i<2;i++){
       	for(int j=0;j<2;j++){
       		matriz_2[i][j] = num[i][j];
       	}
       }
       
       //mostrando matriz_2
       
       for(int i=0;i<2;i++){
       	for(int j=0;j<2;j++){
       		cout<<matriz_2[i][j];
       	}
       	cout<<"\n";
       }




	return 0;
}

