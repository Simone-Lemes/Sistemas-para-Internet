#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int cont, num, qtdeM3=0;
for (cont=1;cont<=10;cont++)
{
cout <<"Informe o "<< cont<< "o. n�mero: ";
cin >>num;
if (num%3==0)
{
qtdeM3+=1;
}
}
cout <<"Foram informados "<< qtdeM3<< " m�ltiplos de 3.";
}


