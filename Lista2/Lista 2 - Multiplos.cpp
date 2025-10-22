#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
    {
        cout << "Eles sao multiplos entre si" <<endl;
    }
    else
    {
        cout << "Nao sao multiplos entre si" <<endl;
    }
return 0;
}