#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float dias, anos;
cout << "Quantos anos voc� j� fez?";
cin >> anos;
dias = anos * 365;
cout << "Voc� j� viveu " <<  dias << " dias.";

 

}
