#include<iostream>
#include<conio.h>


using namespace std;

int main(){

         int num[3][3];
    
	     
         for(int i=0;i < 3; i++){
         	for(int j=0; j < 3; j++){
         		cout<<"Digita los elementos ["<<i<<"]["<<j<<"]: ";
         		cin>>num[i][j];
         	}
         	cout<<"\n";
         }
         
         cout<<"Matriz original\n";
         
         for(int i=0;i<3;i++){
         	for(int j=0;j<3;j++){
         		cout<<num[i][j];
         	}
         	cout<<"\n";
         }
         
         cout<<"Matriz transpuesta\n";
         for(int i=0;i<3;i++){
         	for(int j=0;j<3;j++){
         		cout<<num[j][i];
         	}
         	cout<<"\n";
         }



getch();
	return 0;
}

