#include <iostream>
using namespace std;

//Entrada de dez números e colocá-los em ordem crescente
int main(int argc, char** argv) {
 int num[8];
 int troca=0;
 	
	cout<<"digite dez numeros \n";
	for(int c=0;c<8;c++){
		cin>>num[c];
	}
	for(int c=0;c<8;c++){
		for(int i=0;i<8;i++){
	if(num[i] > num [i+1]){
		troca=num[i];
		num[i]=num[i+1];
		num[i+1]=troca;
	}}}cout<<"a ordem crescente eh \n";
	for(int i=0;i<8;i++){
		cout<<num[i]<<"\n";
	}
	return 0;
}
