#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, quadrado;
cout << "Informe um n�mero qualquer: ";
cin >> num;
quadrado = num * num;
cout <<num << " ao quadrado �: " << quadrado;
if (quadrado>25)
{
cout << " o quadrado de " << num << " � maior do que 25.";
}
}

