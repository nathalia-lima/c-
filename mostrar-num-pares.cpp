#include <iostream>
using namespace std;
// FA�A UM PROGAMA QUE RECEBA 20 N�MEROS E APRESENTE OS N�MEROS PARES


int main(int argc, char** argv) {
	int i, np=0, par[20], num[20];
	
	cout<<"insira os numeros: \n";
	for(i=0;i<20;i++)
	{
		cin>> num[i];
	}
	for(i=0;i<20;i++)
	{
	if(num[i]%2==0)
	{
		 par[np]=num[i];
	     np++;
}}
cout<<"os numeros pares sao: \n";
for(i=0;i<np;i++)
{
	cout<<par[i]<<"\n";
}
	return 0;
}
