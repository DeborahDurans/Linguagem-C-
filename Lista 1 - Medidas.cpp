#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, C;
    cout << "Quais sao as tres medidas?";
    cin >> A >> B >> C;
    double areaQua = (A * A);
    double areaTri = (A * B) / 2;
    double areaTra = ((A + B) * C) / 2;
    cout << fixed << setprecision(4);
    cout << "A area do Quadrado e: " << areaQua << endl;
    cout << "A area d Triangulo e: " << areaTri << endl;
    cout << "A area do Trapezio e: " << areaTra << endl;
return 0;
}