#include<locale.h>
#include<iostream>

/*Digitar idade e mostrá-la*/
using namespace std;

int main(int argc, char *argv[])
{

setlocale(LC_ALL, "pt_BR.UTF-8");
int idade;
cout<<"Qual é a sua idade?";
cin>>idade;
cout<<"\nSua idade é\n"<<idade;

  return 0;
}



