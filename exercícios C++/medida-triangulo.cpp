#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

  float lado1, lado2, lado3;

  cout <<"Medida do primeiro lado: ";

  cin >>lado1;

  cout <<"Medida do segundo lado: ";

  cin >>lado2;

  cout <<"Medida do terceiro lado: ";

  cin >>lado3;

  if (lado1==lado2 && lado2==lado3)

  {

    cout <<"Este � um tri�ngulo equil�tero!";

  }

  else if (lado1==lado2 || lado2==lado3 || lado3==lado1)

  {

    cout <<"Este � um tri�ngulo escaleno!";

  }

  else

  {

    cout <<"Este � um tri�ngulo is�sceles!";

  }

}
