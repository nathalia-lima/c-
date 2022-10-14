#include <stdio.h>
#include <conio.h>
#include <iostream>

/*Calcular área de um terreno*/
using namespace std;
int main(int argc, char *argv[])
{
double n1, n2, n3;
cout<<"Digite o primeiro lado do terreno: ";
cin>>n1;
cout<<"Digite o segundo lado do terreno: ";
cin>>n2;
n3=n1*n2;
cout<<n3;
getch();
  return 0;
}
