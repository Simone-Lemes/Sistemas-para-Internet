#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");

int num, quadrado, cubo;
	cout << "Informe um n�mero qualquer:";
	cin >> num;
	quadrado = num * num;
	cubo = num * num * num;
	cout << num << "\nao quadrado �: " << quadrado;
	cout << num << "\nao cubo �: " << cubo;

  
}


