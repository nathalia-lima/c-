#include <iostream>
using namespace std;
/* Entrada de dados e verificação com if/else */

int main(int argc, char** argv) {
	double senha;
	cout<<"Digite a senha: ";
	cin>>senha;
	if(senha==1234){
		cout<<"ACESSO PERMITIDO";
	}else{
		cout<<"ACESSO NEGADO";
	}
	
	return 0;
}
