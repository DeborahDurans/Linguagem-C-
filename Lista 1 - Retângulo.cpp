#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
 double base, altura, perimetro, diagonal, area;
 cout << "Qual o valor da altura do triangulo? ";
 cin >> altura;
 cout << "Qual o valor da base do retangulo? ";
 cin >> base;
 cout<<fixed<<setprecision(4);
 area = base * altura;
 perimetro = 2 * altura + 2 * base;
 diagonal = sqrt(pow(base,2)+ pow(altura,2));
 cout << "A area do retangulo e: " <<area<< " e o perimetro e: " <<perimetro<< " e a diagonal e: " <<diagonal;
return 0;
}