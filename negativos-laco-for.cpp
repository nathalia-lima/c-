#include <iostream>
using namespace std;
/* Digitar dez n�meros e mostrar a quantidade de n�meros negativas digitados */

int main(int argc, char** argv) {
	double n,nn,c;
	cout<<"Digite dez n�meros: ";
	for(c=1;c<=10;c++){
		cin>>n;
    if (n<0){
    	nn=nn+1;
        
	}else{
	

	}
	}	
	cout<<"Quantidade de n�meros negativos: " << nn;

	return 0;
}
