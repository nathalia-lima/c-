#include <iostream>
using namespace std;
/*Calcular qual combust�vel � mais vantajoso*/

int main(int argc, char** argv) {
float gas, eta, vant;	
	cout<<"Digite o valor da gasolina";
	cin>>gas;
	cout<<"Digite o valor do etanol";
	cin>>eta;	
	vant=eta/gas;
	if(vant<0.7){
		cout<<"O etanol � mais vantajoso";
	}else{
		cout<<"A gasolina � mais vantajosa";
	}
	
	
	return 0;
}
