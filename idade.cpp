#include <iostream>
using namespace std;
/* Digitar a idade e verificar se é maior de idade ou não */

int main(int argc, char** argv) {
int n1;
cout<<"Digite a sua idade";
cin>>n1;

if(n1>18){
	cout<<"é maior de idade";
}else{
	cout<<"é menor de idade";
}	
	return 0;
}
