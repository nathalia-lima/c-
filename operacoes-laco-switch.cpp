#include <iostream>
using namespace std;
/* Entrada de dois números e escolher qual operação quer que seja feita */

int main(int argc, char** argv) {
	int n1, n2, re;
	char op;
	cout<<"Digite dois numeros\n";
	cin>>n1;
	cin>>n2;
	cout<<"Digite a opcao desejada\n(+)\n(-)\n(*)\n(/)\n";
	cin>>op;
	
	switch (op){
		case '+':
			re=(n1+n2);
			cout<<re;
			break;
		case '-': 
		     re=(n1-n2);
		     cout<<re;
		     break;
		case'*':
			re=(n1*n2);
			cout<<re;
			break;
		case'/':
			re=(n1/n2);
			cout<<re;
			break;
		     
			
	}
	
	
	
	return 0;
}
