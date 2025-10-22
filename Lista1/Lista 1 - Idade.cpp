#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
int main()
{
    int idade1, idade2;
    string nome1, nome2;
    cout << "Qual o nome da primeira pessoa?";
    cin >> nome1;
    cout << "Qual a idade da primeira pessoa?";
    cin >> idade1;
    cout << "Qual o nome da segunda pessoa?";
    cin >> nome2;
    cout << "Qual a idade da segunda pessoa?";
    cin >> idade2;
    cout << "A primeira pessoa e : " <<nome1<< " e tem" <<idade1<< "anos e a segunda pessoa e: " <<nome2<< " e tem " <<idade2<< " anos ";
return 0;
}