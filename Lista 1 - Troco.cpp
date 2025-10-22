#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double produto, qntd, troco, dinheiro, valor;
    cout << "Qual o valor do produto?";
    cin >> produto;
    cout << "Qual a quantidade desse produto?";
    cin >> qntd;
    cout << "Quanto o cliente pagou?";
    cin >> dinheiro;
    valor = produto * qntd;
    troco = dinheiro - valor;
    if(dinheiro > valor)
    {
        cout << "O troco e:" <<troco;
    }
    else 
    {
        cout << "O valor e insuficiente";
    }
return 0;
}