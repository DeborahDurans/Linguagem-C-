#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d1, d2, d3;
    cout << "Digite tres distancias: ";
    cin >> d1 >> d2 >> d3;
    if (d1>d2 && d1>d3)
    {
        cout << "A maior distancia foi: " << d1 << endl;
    }
    else if (d2>d1 && d2>d3)
    {
        cout << "A maior distancia foi: " << d2 << endl;
    }
    else 
    {
        cout << "A maior distancia foi: " << d3 << endl;
    }
return 0;
}