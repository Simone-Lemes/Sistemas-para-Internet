#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float quantDin,  valorComb, quantLitros;
cout << ("Quanto custa o litro do combust�vel? R$");
cin >> valorComb;
cout << ("Quantos reais voc� tem? R$ ");
cin >> (quantDin);
quantLitros=quantDin/valorComb;
cout << "Com R$" <<quantDin <<" voc� consegue abastecer " <<floor (quantLitros) <<" litros de combust�vel.\n";
cout << "Com R$" <<quantDin <<" voc� consegue abastecer " <<quantLitros <<" litros de combust�vel.";
}


