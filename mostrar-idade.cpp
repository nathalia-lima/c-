#include<locale.h>
#include<iostream>

/*Digitar idade e mostr�-la*/
using namespace std;

int main(int argc, char *argv[])
{

setlocale(LC_ALL, "pt_BR.UTF-8");
int idade;
cout<<"Qual � a sua idade?";
cin>>idade;
cout<<"\nSua idade �\n"<<idade;

  return 0;
}



