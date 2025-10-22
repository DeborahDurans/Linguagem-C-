#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char escala;
    double temperatura, conversao;
    cout << "Qual a escala da temperatura (C/F)?";
    cin >> escala;
    if (escala == 'F' || escala == 'f')
    {
        cout << "Qual a temperatura em Fahrenheit? ";
        cin >> temperatura;
        cout << fixed << setprecision(2);
        conversao = (5.0 / 9.0) * (temperatura - 32.0);
        cout << "A temperatura em Celcius e: " <<conversao;
    }
    else if (escala == 'C' || escala == 'c')
    {
        cout << "Qual a temperatura em Celcius? ";
        cin >> temperatura;
        cout << fixed << setprecision(2);
        conversao = (temperatura * 9.0 / 5.0) + 32.0;
        cout << "A temperatura em Fahrenheit e: " <<conversao;
    }
    else
    {
        cout << "A escala e invalida ou nao existe";
    }
return 0;
}