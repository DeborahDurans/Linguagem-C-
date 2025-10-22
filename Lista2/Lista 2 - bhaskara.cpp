#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double raiz1, raiz2, delta;
    int A, B, C;
    cout << "Digite os valore de A, B e C: ";
    cin >> A >> B >> C;
    delta = (B*B) - (4 * A * C);
    raiz1 = (-B + sqrt(delta))/(2*A);
    raiz2 = (-B - sqrt(delta))/(2*A);
    if (delta > 0)
    {
    cout << "Ha duas raizes reais e diferentes " << endl;
    cout << "Primeira: " <<raiz1<< "e a segunda: " <<raiz2;
    }
    else if (delta = 0)
    {
        cout << "Ha duas raizes reais, mais iguais: " <<raiz1;
    }
    else
    {
        cout << "Nao ha raiz real";
    }
return 0;
}