#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
int limite, cont, num, qtdePar=0, qtdeImpar=0;
cout <<"A sequ�ncia ir� de 1 at� quanto? ";
cin >>limite;
for (cont=1;cont<=limite;cont++)
{
cout <<"Informe o "<<cont<<"o. n�mero: ";
cin >>num;
if (num%2==0)
{
qtdePar++;
}
else
{
qtdeImpar++;
}
}
cout <<"Quantidade de n�meros pares: "<<qtdePar<<"\n";
cout <<"Quantidade de n�meros �mpares: "<<qtdeImpar;
}
}
