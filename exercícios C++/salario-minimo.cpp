#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float salario;
cout <<"Informe o seu sal�rio: R$ ";
cin >> salario;
if (salario>1000)
{
cout <<"Seu sal�rio � maior do que o sal�rio m�nimo!";
}
else
{
cout <<"Seu sal�rio � menor do que o sal�rio m�nimo!";
}
}
