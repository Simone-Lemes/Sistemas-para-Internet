#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
 {

  int indice, numeros[15];

  for (indice=0;indice<=14;indice++)

  {

   cout <<"Informe o "<<indice+1<<"o. n�mero: ";

   cin >>numeros[indice];

  }

  for (indice=14;indice>=0;indice--)

  {

   cout <<indice+1<<"o. n�mero: "<<numeros[indice]<<"\n";

  }

}
}
