#include <iostream>
using namespace std;
/* Entrada de cinco idades e mostrar qual a maior */

int main(int argc, char** argv) {
	int c, idade=0, maior=0;
	cout<<"Digite as idades: \n";
	for (c=1;c<=5;c++){

	cin>>idade;
	
	if (idade>maior){
		maior=idade;
	}
}
	
	cout<<"Maior idade = "<<maior;

	
	
	
	
	
	
	return 0;
}
