#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Digite os tres numeros: " <<endl;
    cin >> a >> b >> c;
    if (a<b && a<c)
    {
        cout << "O menor numero e: " <<a;
    }
    else if (b<a && b<c)
    {
        cout << "O menor numero e: " <<b;
    }
    else
    {
        cout << "O menor numero e: " <<c;
    }
return 0;
}