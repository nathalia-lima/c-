#include <iostream>
using namespace std;
/* Entrada de dez n�meros e mostrar quantos n�meros pares tem e quantos �mpares tem */

int main(int argc, char** argv) {
	int c, np, ni, n;
	
	cout<<"Digite dez n�meros";
	for (c=1;c<=10;c++){
	cin>>n;
	if (0==n%2){
		np=np+1;
	}else{
	
	ni=ni+1;
}
	}
	cout<<np<<"Numeros sao pares";
	cout<<ni<<"Numeros impares";
	
	
	return 0;
}
