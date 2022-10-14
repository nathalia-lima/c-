#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
//fórmula de pitágoras, utilizando função de raiz quadrada

using namespace std;
int main(int argc, char *argv[])
{
double n1, n2, n3, n4;
cout<< "Digite o valor do primeiro cateto";
cin>>n1;
cout<< "Digite o valor do segundo cateto";
cin>>n2;
n3=(n2*n2)+(n1*n1);
n4= sqrt(n3);
cout<<n4;
getch ();
  return 0;
}
