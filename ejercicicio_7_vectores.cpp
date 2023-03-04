#include<iostream>
#include<conio.h>


using namespace std;

int main(){

     char letras_1[] = {'a','b','c','d','e'};
     char letras_2[] = {'f','g','h','i','j'};
     char letras_3[10];
     
     //copiando los elemnetos del arreglo letras 1 hacia letras 3
     
     for(int i=0; i<5; i++){
     	letras_3[i] = letras_1[i];
     	
     }
     
     //copiando los elementos de letras 2 hacia letras 3
     
     for(int i=5; i<10; i++){
     	letras_3[i] = letras_2[i-5];
     }
     
     //nuevo arreglo
     
     for(int i=0; i<10; i++){
     	cout<<letras_3[i]<<endl;
     	
     }
     

    getch();

	return 0;
}

