#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
{
 int num, contador, res;
 cout <<"Voc� deseja ver a tabuada de que n�mero? ";
  cin >>num;
  for (contador=0;contador<=10;contador++)
   {
        res = num * contador;
     cout <<num<<" x "<<contador<<" = "<<res<<"\n"; {
   }
  }
 }
}
