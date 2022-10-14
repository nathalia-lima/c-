#include <iostream>
//Entrada de dois números e escolher qual operação deseja, retorno utlizando laco do while

using namespace std;
int main(int argc, char** argv) {
	int i=0, n1=0, n2=0, o=0;
	double r=0;
	cout<<"digite dois numeros piranha \n";
    cin>>n1;
    cin>>n2;
    do{
    cout<<"\n 1- divisao \n 2- subtracao \n 3- adicao \n 4- multiplicacao \n";
     cin>>i;
    if(i==1){
    	r=n1/n2;
    	cout<<"\n Resultado: "<<r;
	}if(i==2){
		r=n1-n2;
		cout<<"\n Resultado: "<<r;
	}if(i==3){
		r=n1+n2;
		cout<<"\n Resultado: "<<r;
	}if(i==4){
		r=n1*n2;
		cout<<"\n Resultado: "<<r;
	}cout<<"\n digite 5 para mudar operacao ou 0 para terminar \n";
	cin>>o;
	if(o==0){return 0;
	}
}while(o==5);
	
}
