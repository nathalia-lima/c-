#include <iostream>

//digitar oito números e mostrá-los

using namespace std;

int main()
{
    int Numeros[8];
    int a = 0;
    
    cout<<("Digite 8 números");
    while (a < 8)
    {
        cin >> Numeros[a];
        a++;
    }
    for (int j = 0; j < 7; j++)
{
for (int i = 0; i < 7; i++)
{
  if (Numeros[i] > Numeros[i+1])
  {
     int temp = Numeros[i];
     Numeros[i] = Numeros[i+1];
     Numeros[i+1] = temp;
  }
}
}
cout << "\n";
for (int b = 0; b < 8; b++)
{
    cout << Numeros[b] << endl;
}
    return 0;
}
