#include <iostream>
using namespace std;
/* Entrada de quantidade e utiliza��o de if/else para realiza��o de opera��es */

int main(int argc, char** argv) {
	float lar, pre;
	cout<<"Digite quantas laranjas voc� pegou: \n";
	cin>>lar;
	if(lar<12){
		pre=(lar*0.20); 
		cout<<"Cada laranja vale R$0.20\nO valor total ficou em: " << pre;
	}else{
		pre=(lar*0.15);
		cout<<"Cada laranja vale R$0.15 \nO valor total ficou em: " << pre;
	}
	
	return 0;
}
