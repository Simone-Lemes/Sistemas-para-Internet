#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

float precoProduto, precoVenda;
cout << "Digite o pre�o do produto: R$";
cin >> precoProduto;
precoVenda = precoProduto + (precoProduto * 20 / 100);
cout << "Pre�o sugerido para venda � de R$" <<precoVenda;

}
