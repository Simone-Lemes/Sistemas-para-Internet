#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
int regressiva=0;
cout <<"Qual o valor para in�cio da contagem regressiva? ";
cin >>regressiva;
while (regressiva>=0)
{
cout <<regressiva<<"\n";
regressiva--;
}
}
}
