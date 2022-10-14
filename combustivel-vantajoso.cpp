#include <iostream>
using namespace std;
/*Calcular qual combustível é mais vantajoso*/

int main(int argc, char** argv) {
float gas, eta, vant;	
	cout<<"Digite o valor da gasolina";
	cin>>gas;
	cout<<"Digite o valor do etanol";
	cin>>eta;	
	vant=eta/gas;
	if(vant<0.7){
		cout<<"O etanol é mais vantajoso";
	}else{
		cout<<"A gasolina é mais vantajosa";
	}
	
	
	return 0;
}
