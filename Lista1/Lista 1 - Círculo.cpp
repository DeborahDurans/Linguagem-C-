#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double pi, r, area;
    cout << "Qual o valor do raio do circulo?";
    cin >> r;
    cout<<fixed<<setprecision(2);
    pi = 3.14159;
    area = pi * pow(r, 2);
    cout << "A area e: " <<area;
return 0;
}