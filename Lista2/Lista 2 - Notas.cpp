#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double media, nota1, nota2;
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;
    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;
    cout<<fixed<<setprecision(1);
    media = (nota1 + nota2)/2;
    if (media > 6.0)
    {
        cout << "O aluno esta APROVADO" <<endl;
        cout << "Com media: " <<media;
    }
    else 
    {
        cout << "O aluno esta REPROVADO" <<endl;
        cout << "Com media : " <<media;
    }
return 0;
}