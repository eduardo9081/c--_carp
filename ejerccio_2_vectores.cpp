#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num[] = {1,2,3,4,5,6};
	int mult=1;
	
	for(int i=0; i<6; i++){
		
		mult *= num[i];
	}
	
	cout<<"El resultado es: "<<mult<<endl;
	
	getch();
	
	return 0;
}
