#include <iostream>
using namespace std;
main(){
	//si la condicion es verdadera el cilco se sigue ejecutando
	int i=5;
	while(i<5){
		i--;
		cout<<i<<endl;
		
	}
	
	char respuesta;
	cout<<"Desea ingresar otro valor (s/n)";
	cin>>respuesta;
	
	
	int ii=5;
	do{
		i++;
		cout<<"do while:"<<ii<<endl;
	}while(ii<5);
}
