#include <iostream>
using namespace std;
/* Escolher um n�mero e mostrar a tabuada dele */

int main(int argc, char** argv) {
	int c,n,re;
	cout<<"Digite qual tabuada voc� deseja: ";
	cin>>n;
	for(c=0;c<=10;c++){
		re=(c*n);
		cout<<c<<"x"<<n<<"="<<re<<"\n";
	}
	

	return 0;
}
