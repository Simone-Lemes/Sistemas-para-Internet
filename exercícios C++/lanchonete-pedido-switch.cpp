#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

  int codigo, qtde;

  float valor=0;

  char continua = 'S';

  cout <<"*** Card�pio ***\n";

  cout <<"100 - Hamb�rguer - R$5,50\n";

  cout <<"101 - Cachorro-quente - R$4,50\n";

  cout <<"102 - Milkshake - R$7,00\n";

  cout <<"103 - Pizza brotinho - R$8,00\n";

  cout <<"104 - Cheeseburguer - R$8,50\n";

  cout <<"Informe o c�digo do seu pedido: ";

  cin >>codigo;

  cout <<"Informe a quantidade desejada: ";

  cin >>qtde;

  while (continua=='S')

  {

    switch (codigo)

    {

      case 100:

      valor += qtde * 5.50;

      break;

      case 101:

      valor += qtde * 4.50;

      break;

      case 102:

      valor += qtde * 7.00;

      break;

      case 103:

      valor += qtde * 8.00;

      break;

      case 104:

      valor += qtde * 8.50;

      break;

      default:

      cout <<"Pedido inv�lido!";

    }

    cout <<"Adicionar outro item? S / N: ";

    cin >>continua;

    if (continua=='S')

    {

      cout <<"*** Card�pio ***\n";

      cout <<"100 - Hamb�rguer - R$5,50\n";

      cout <<"101 - Cachorro-quente - R$4,50\n";

      cout <<"102 - Milkshake - R$7,00\n";

      cout <<"103 - Pizza brotinho - R$8,00\n";

      cout <<"104 - Cheeseburguer - R$8,50\n";

      cout <<"Informe o c�digo do seu pedido: ";

      cin >>codigo;

      cout <<"Informe a quantidade desejada: ";

      cin >>qtde;

    }

  }

  cout <<"Valor total a pagar R$ " << valor;

}
