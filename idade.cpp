#include <iostream>
using namespace std;
/* Digitar a idade e verificar se � maior de idade ou n�o */

int main(int argc, char** argv) {
int n1;
cout<<"Digite a sua idade";
cin>>n1;

if(n1>18){
	cout<<"� maior de idade";
}else{
	cout<<"� menor de idade";
}	
	return 0;
}
