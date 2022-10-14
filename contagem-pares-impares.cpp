#include <iostream>
using namespace std;
/* Entrada de dez números e mostrar quantos números pares tem e quantos ímpares tem */

int main(int argc, char** argv) {
	int c, np, ni, n;
	
	cout<<"Digite dez números";
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
