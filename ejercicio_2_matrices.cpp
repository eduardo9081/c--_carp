#include<iostream>
#include<conio.h>


using namespace std;

int main(){

        int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        
                       
        cout<<"La diagonal principal es: ";
        for(int i=0;i<3;i++){
        	cout<<num[i][i]<<" ";
        }
        
        cout<<endl;
        
        
 getch();



	return 0;
}

