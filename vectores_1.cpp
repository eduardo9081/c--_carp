#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int numero[] = {1,2,3,4,5,20};
	int suma = 0;
	
	for(int i=0; i<6; i++){
		suma = suma + numero[i];
	}
	
	cout<<"La suma de los elementos del vecror es: "<<suma<<endl;
	
	getch();
	return 0;
}
