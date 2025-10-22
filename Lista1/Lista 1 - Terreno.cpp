#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double comp, larg, area, vmq, preco;

    cout << "Qual a medida do comprimento do terreno com uma casa decimal:";
    cin >> comp;
    cout << "Qual a medida da largura do terreno com uma casa decimal:";
    cin >> larg;
    cout << "Qual o valor do metro quadrado na sua regiao?";
    cin >> vmq;
    cout<<fixed<<setprecision(2);
    area = comp * larg;
    preco = area * vmq;
    cout << "O preco do terreno e: " << preco << " e a area e:" << area << "m2";
    return 0;
}