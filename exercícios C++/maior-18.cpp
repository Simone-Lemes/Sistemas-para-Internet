#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float dias, anos;
cout << "Quantos dias voc� j� viveu? ";
cin >> dias;
anos = dias / 365;
cout << "Voc� j� viveu " << anos << " anos.";
if (anos>=18)
{
cout << "Voc� � maior de idade.";
}
}
