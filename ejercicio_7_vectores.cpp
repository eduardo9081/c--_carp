#include<iostream>
#include<conio.h>

using namespace std;

int main(){

      int numero_1[] = {2,5,6,4,3};
      int numero_2[5];
      
     for(int i=0;i<5;i++){
     	numero_2[i] = numero_1[i] * 2;
     }
     
     for(int i=0; i<5; i++){
     	cout<<numero_2[i]<<endl;
     }
     
    getch();
	return 0;
}

