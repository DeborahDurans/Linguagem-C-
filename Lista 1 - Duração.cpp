#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int segundosT;
    cout << "Qual a duracao em segundos?";
    cin >> segundosT;
    int horas = segundosT / 3600;
    int resto = segundosT % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;
    cout << horas << " : " << minutos << " : " << segundos << endl;
return 0;   
}