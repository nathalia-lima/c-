#include <iostream>
using namespace std;
//Entrada de dez n�meros e caclular a m�dia deles

int main(int argc, char** argv) {
 int num[10];
 float soma=0, cont=0, media;
	
	cout<<"Digite dez numeros \n";
	for(int c=0;c<10;c++){
		cin>>num[c];
	}
	for(int c=0;c<10;c++){
	if(num[c] != 0){
		cont++;
		soma=soma+num[c];
	}}
	media=soma/cont;
	cout<<"A media dos numeros eh "<<media;
	return 0;
}
