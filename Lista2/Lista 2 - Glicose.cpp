#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double glicose;
    cout << "Digite a medida da glicose: ";
    cin >> glicose;
    if (glicose <= 100)
    {
        cout << "O paciente esta com a glicose normal";
    }
    else if(glicose <= 140)
    {
        cout << "O paciente esta com a glicose elevada";
    }
    else
    {
        cout << "O paciente esta diabetico";
    }
return 0;
}