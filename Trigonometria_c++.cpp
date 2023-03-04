#include<iostream>
#include<math.h>
#include<stdlib.h>
#define PI 3.1415926536 

using namespace std;

int main(){
	
	int opc, si, procedimiento;
	float cat_ca = 0,cat_co=0, cat_x, h=0, operacion=0,  seno=0, coseno=0, tangente=0, rad=0,resultado=0,n1,n2,n,numero;
	double num_1, num_2, angulo=0,lado_1,lado_2, pi=3.1415926536;
	
	cout<<"TRIGONOMETRIA y Operaciones aristemticas"<<endl;
	cout<<"\nInstrucciones:"<<endl;
	cout<<"Para usar la opcion deseada que se mencionan abajo solo debe de ingresar el numero de opcion donde se indica"<<endl;
	cout<<"\nMenu"<<endl;
	cout<<"1. Sacar hipotenusa"<<endl;
	cout<<"2. Sacar hipotenusa, conociendo solo el valor del cateto 'co' y  el angulo"<<endl;
	cout<<"3. Sacar hipotenusa, conociendo solo el valor del cateto 'ca' y el angulo"<<endl;
	cout<<"4. Sacar cateto 'co', conociendo el valor del angulo y la hipotenusa"<<endl;
	cout<<"5. Sacar cateto 'ca', conociendo el valor del angulo y  la hipotenusa"<<endl;
	cout<<"6. Sacar angulo"<<endl;
	cout<<"7. Funciones trigonometricas"<<endl;
	cout<<"8. Sacar el cociente"<<endl;
	cout<<"9. Sacar un cateto solo con la hipotenusa"<<endl;
	cout<<"10. Suma"<<endl;
	cout<<"11. Resta"<<endl;
	cout<<"12. Multiplicacion"<<endl;
	cout<<"13. Divicion"<<endl;
	cout<<"14. Raiz cuadrada"<<endl;
	cout<<"15. Potencia"<<endl;
	cout<<"-> opcion: ";
	cin>>opc;
	
	
	
	switch(opc){
		
		case 1:
			cout<<"\nSacar hipotenusa\n";
			cout<<"Ingrese el valor del cateto 'co': ";
			cin>>cat_co;
			cout<<"Ingrese el valor del cateto 'ca': ";
			cin>>cat_ca;
			operacion = (pow(cat_co, 2)) + (pow(cat_ca, 2));
			operacion = sqrt(operacion);
			cout.precision(4);
			cout<<"La hipotenusa del triangulo rectangulo es: "<<operacion<<endl;
			cout<<"\npara ver el procedimiento ingrese el numero 1 -> ";
			cin>>procedimiento;
			if(procedimiento == 1){
				cout<<"Para saber como se saca la hipotenusa conociendo el valor de los 2 catetos"<<endl;
				cout<<"Solo se debe de sumar los catetos elevados al cuadrado // co^2 + ca^2"<<endl;
				cout<<"El resultado de la suma se le debe de sacar raiz cuadrada, lo que te de seria la hipotenusa de tu triangulo rectangulo"<<endl;
			}
			else{
				cout<<"ERROR!!!"<<endl;
				cout<<"Esta opcion no esta disponible"<<endl;
			}
			break;
		case 2:
			cout<<"\n2. Sacar hipotenusa, conociendo solo el valor del cateto 'co' y  el angulo"<<endl;
			cout<<"\nIngrese el valor del cateto co: ";
			cin>>cat_co;
			cout<<"Ingrese el valor de angulo: ";
			cin>>angulo;
			rad = angulo*PI/180;
			seno = sin(rad);
			resultado = cat_co / seno;
			cout.precision(3);
			cout<<"\nEl valor de la hipotenusa es: "<<resultado<<endl;break;
			 
		case 3:
			cout<<"\n3. Sacar hipotenusa, conociendo solo el valor del cateto 'ca' y el angulo"<<endl;
			cout<<"\nIngresa el valor del cateto ca: ";
			cin>>cat_ca;
			cout<<"Ingresa el valor del angulo: ";
			cin>>angulo;
			rad = angulo*PI/180;
			coseno = cos(rad);
			resultado = cat_ca / coseno;
			cout.precision(3);
			cout<<"\nEl valor de la hipotenusa es: "<<resultado<<endl;break;
			
		case 4:
			cout<<"\n4. Sacar cateto 'co', conociendo el valor del angulo y  la hipotenusa"<<endl;
			cout<<"\nIngrese el valor de la hipotenusa: ";
			cin>>h;
			cout<<"Ingres el valor del angulo: ";
			cin>>angulo;
			rad = angulo*PI/180;
			seno = sin(rad);
			cat_co = h * seno;
			cout.precision(3);
			cout<<"El valor del cateto 'co' es: "<<cat_co<<endl;break;
		case 5:
				cout<<"\n5. Sacar cateto 'ca', conociendo el valor del angulo y  la hipotenusa"<<endl;
				cout<<"\nIngrese el valor de la hipotenusa: ";
				cin>>h;
				cout<<"Ingrese el valor del angulo: ";
				cin>>angulo;
				rad = angulo*PI/180;
				coseno = cos(rad);
				cat_ca = h * coseno;
				cout.precision(4);
				cout<<"El valor del cateto 'ca' es: "<<cat_ca<<endl;break;
		case 6:
				cout<<"\n6. Sacar angulo"<<endl;
				cout<<"ERROR!!!!"<<endl;
				break;
		case 7:
			cout<<"\n7. Funciones trigonometricas"<<endl;
			cout<<"Este apartado es para que conoscas las funciones trigonometricas.";
			cout<<"\nMismas que se utilizan para el funcionamiento de este programa";
			cout<<"\nFuncion 'Tan': CO/CA "<<endl;
			cout<<"\nFuncion 'Sen': CO/H"<<endl;
			cout<<"\nFuncion 'Cos': CA/H"<<endl;
			cout<<"Porximamente se explicara mas a detalle para que sirven y su implemetancion"<<endl;break;
			
		case 8:
			cout<<"\nSacar el cociente";
			cout<<"\nLo siento esta funcion no esta disponible al momento, sigo trabajando en ella"<<endl;break;
		case 9:
				cout<<"\n9. Sacar un cateto solo con la hipotenusa"<<endl;
				cout<<"Ingrese el valor de la hipotenusa: ";
				cin>>h;
				cout<<"Ingrese el valor del cateto que se se tiene: ";
				cin>>cat_x;
				resultado = pow(h, 2) - pow(cat_x, 2);
				resultado = sqrt(resultado);
				cout<<"El valor del cateto que se busca es: "<<resultado<<endl;break;
				
		case 10: 
		     cout<<"\nSuma"<<endl;
		     cout<<"Ingresa el numero de elemnetos de la suma: ";
		     cin>>n;
		     
		     for(int i=0; i<n; i++){
		     	cout<<i+1<<" Ingresa el numero: ";
		     	cin>>numero;
		     	operacion += numero;
		     	
		     }
		     cout<<"El resultado de la suma es: "<<operacion<<endl;break;
		case 11:
			cout<<"\nResta"<<endl;
			cout<<"Ingresa el primer numero: ";
			cin>>n1;
			cout<<"Ingresa el segundo numero: ";
			cin>>n2;
			operacion = n1 - n2;
			cout<<"El resultado de restar "<<n1<<" Menos "<<n2<<" Es: "<<operacion<<endl;break;
		case 12:
			cout<<"\nMultiplicacion"<<endl;
				cout<<"Ingresa el primer valor: ";
			cin>>n1;
			cout<<"Ingresa el segundo valor: ";
			cin>>n2;
			operacion = n1 * n2;
			cout<<"El resultado de la multiplicacion es: "<<operacion<<endl;break;
		case 13:
			cout<<"\nDivicion"<<endl;
			cout<<"Ingresa el primer valor: ";
			cin>>n1;
			cout<<"Ingresa el segundo valor: ";
			cin>>n2;
			if(n2 == 0){
				cout<<"No se puede divir entre 0";
			}
			else{
				operacion = n1 / n2;
				cout<<"El resultado de la divicion es: "<<operacion<<endl;
			}
			break;
		case 14:
			cout<<"\nRaiz cuadrada"<<endl;
			cout<<"Ingresa el numero que se le quiere sacar raiz: ";
			cin>>numero;
			operacion = sqrt(numero);
			cout<<"La raiz cuadrada de "<<numero<<" Es: "<<operacion<<endl;break;
		case 15:
			cout<<"\nPotencia"<<endl;
			cout<<"Ingrese el numero: ";
			cin>>numero;
			cout<<"Ingrese a que potencia se quiere elevar: ";
			cin>>n;
			operacion = pow(numero, n);
			cout<<"El numero "<<numero<<" Elevado a "<<n<<" es: "<<operacion<<endl;break;
		case 16: break;
	}
	
	
	system("pause");
	
	return 0;
}
