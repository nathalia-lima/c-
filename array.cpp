
#include <iostream>
using namespace std;
/* Entrada de oito números e mostrá-los*/

int main(int argc, char** argv) {

	float num [7];
	int i=8;
	int tl,aux;
	cout<<"Digite oito numeros \n";
	for (i=0;i<8;i++){
	cin>>num[i];
}
do {
	tl=0;
	for (i=0;i<7;i++){
	
	if (num[i]>num[i+1]){
		aux=num[i+1];
		num[i+1]=num[i];
		num[i]=aux;
		tl=1;
	}
}
} while(tl==1);
for (i=0;i<8;i++){
cout<<"\n"<<num[i];
}
	return 0;
}


