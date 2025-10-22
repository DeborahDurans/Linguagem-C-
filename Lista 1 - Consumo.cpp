#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double distancia, combustivel, consumoM;
    cout << "Qual a distancia percorrida(km)?";
    cin >> distancia;
    cout << "Qual o gasto de combustivel(litros)?";
    cin >> combustivel;
    consumoM = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << "O consumo medio e: " <<consumoM<<  " Km/L" <<endl;
return 0;
}