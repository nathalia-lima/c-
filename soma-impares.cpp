#include <iostream>
using namespace std;
/* Entrada de dez números e somar apenas os que são ímpares */

int main(int argc, char** argv) {
 int num[10], soma=0;
	
	cout<<"Digite dez numeros \n";
	for(int c=0;c<10;c++){
		cin>>num[c];
	}
	for(int c=0;c<10;c++){
	if(num[c] % 2==1){
		soma=soma+num[c];
	}}
	cout<<"A soma dos impares eh "<<soma;
	return 0;
}
