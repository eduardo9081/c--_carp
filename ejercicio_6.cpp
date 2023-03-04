#include<iostream>
#include<conio.h>


using namespace std;

int main(){

     
      
      int vector[100], n, suma=0, si;
	  
	  cout<<"Ingrese el numero de arreglos: ";
	  cin>>n;
	  
	  for(int i=0; i<n; i++){
	  	cout<<i+1<<". ingrese un numero: ";
	  	cin>>vector[i];
	  	
	  	suma += vector[i];
	  	
	  	if(vector[i] == suma){
	  		si=vector[i];
	  	}
	  } 
     
    if(si == suma){
    	cout<<"Si existe un numero es: "<<si<<endl;
    }
    else{
    	cout<<"No existe"<<endl;
    }
   
    getch();

	return 0;
}

