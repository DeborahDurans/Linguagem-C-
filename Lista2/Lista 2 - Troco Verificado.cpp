#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int produto, qtd, troco, dinheiro, valor;
    cout << "Digite o valor do produto: ";
    cin >> produto;
    cout << "Digite a quantidade: ";
    cin >> qtd;
    cout << "Quanto o cliente pagou? ";
    cin >> dinheiro;
    valor = produto * qtd;
    if (dinheiro > valor)
    {
        troco = dinheiro - valor;
        cout << "O troco sera de: " <<troco;
    }
    else 
    {
        troco = valor - dinheiro;
        cout << "O valor e insuficiente e falta: " <<troco;
    }
return 0;
}