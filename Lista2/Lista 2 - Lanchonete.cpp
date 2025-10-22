#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int qtd, codigo;
    double total;
    cout << "Informe o codigo do produto (1 a 5): " << endl;
    cin >> codigo;
    cout << "Informe a quantidade: " << endl;
    cin >> qtd;
    cout << fixed << setprecision(2);
    if (codigo = 1)
    {
        total = qtd * 5.00;
        cout << "O valor total e de: " << total << endl;
    }
    else if (codigo = 2)
    {
        total = qtd * 3.50;
        cout << "O valor total e de: " << total << endl;
    }
    else if (codigo = 3)
    {
        total = qtd * 4.80;
        cout << "O valor total e de: " << total << endl;
    }
    else if (codigo = 4)
    {
        total = qtd * 8.90;
        cout << "O valor total e de: " << total << endl;
    }
    else if (codigo = 5)
    {
        total = qtd * 7.32;
        cout << "O valor total e de: " << total << endl;
    }
    else if (codigo > 5)
    {
        cout << "Codigo invalido";
    }
return 0;
}