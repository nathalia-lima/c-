#include <iostream>
using namespace std;
/* Digitar dez números e mostrar a quantidade de números negativas digitados */

int main(int argc, char** argv) {
	double n,nn,c;
	cout<<"Digite dez números: ";
	for(c=1;c<=10;c++){
		cin>>n;
    if (n<0){
    	nn=nn+1;
        
	}else{
	

	}
	}	
	cout<<"Quantidade de números negativos: " << nn;

	return 0;
}
