#include <iostream>
using namespace std;
main(){
	i++, i+=1, i=i+1
	int contar=0;
	for (int i=0;i<=10;i++){
		if(i==5){
		cout<<"if"<<endl;
			break;
		}
		cout<<i<<endl;
		contar++; 
	}
	cout<<"ciclos:"<<contar<<endl;
}
#include <iostream>
using namespace std;
main(){
	int tam=0;
int datos[]={10,40,100,250,3000};
for(int i:datos){
	cout<<i<<endl;
}
	
	
}
int inicio=0,fin=0,res=0;
cout<<"Ingrese tabla:";
cin>>inicio;
cout<<"ingrese tabla final:";
cin<<fin;
for(int rango=inicio;rango<=fin;rango++){
	for(int i=1;i<=10;i++){
		cout<<"tabla del"<<rango<<endl;
		res=rango *i;
		cout<<rango<<"X"<<i<<"="<<rea<<endl;
	}
	
}
	
}
