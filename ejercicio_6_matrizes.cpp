#include<iostream>


using namespace std;

int main(){

	    int num;
	    cout<<"Digita un numero mayor a 5: ";
	    cin>>num;
	    
	    switch(num <= 5){
	    	cout<<"El numero que ingreso no es valido, ingrese otro: ";
	    	cin>>num;
	    }
	    
	    cout<<"Correcto!!!"<<endl;




	return 0;
}

