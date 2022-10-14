#include <iostream>
using namespace std;
/* Entrada de oito números e mostrar a soma deles */

int main(int argc, char** argv) {
	int c, n=0, r=0;
	cout<<"Digite 8 numeros: \n";
	for(c=1;c<=8;c++){
	cin>>n;
    r=n+r;
}	
	cout<<"A soma e: \n"<<r;
	return 0;
}
