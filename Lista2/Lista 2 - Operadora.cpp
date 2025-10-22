#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
    int minutos;
    double valor;
    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;
    cout << fixed << setprecision(2);
    if (minutos <= 100)
    {
        cout << "O valor e de 50 reais" <<endl;
    }
    else
    {
        valor = (minutos - 100) * 2.0 + 50;
        cout << "O valor e de: " <<valor<< " reais" <<endl;
    }
return 0;
}