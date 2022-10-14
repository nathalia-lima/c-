#include <iostream>
using namespace std;

//DESENVOLVA UM PROGAMA QUE RECEBA OS PREÇOS DE DEZ PRODUTOS E APRESENTE O MAIS BARATO
int main(int argc, char** argv) {
	double menor, precos[10];
	int i;

	cout<<"digite dez precos: \n";
	for(i=0;i<10;i++)
	{
		cin>>precos[i];
	}
	menor=precos[0];
	for(i=0;i<10;i++)
	{
		if(menor>precos[i])
		menor=precos[i];
	}
	cout<<menor;
	return 0;
}

