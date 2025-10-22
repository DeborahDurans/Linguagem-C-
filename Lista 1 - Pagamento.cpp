#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int hrst, vph, salario;
    string nome;
    cout << "Qual o nome do funcionario?";
    cin >> nome;
    cout << "Quanto o funcionario recebe por hora?";
    cin >> vph;
    cout << "Quantas horas ele trabalhou durante o mes?";
    cin >> hrst;
    salario =  vph * hrst;
    cout << "O funcionario " <<nome<< " recebera " <<salario;
return 0;
}