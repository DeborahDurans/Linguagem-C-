#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Quantos elementos da sequência de Fibonacci deseja? ";
    cin >> n;
    
    if(n <= 0) {
        cout << "Número inválido." << endl;
        return 0;
    }
    
    long long fib[n];
    
    if(n >= 1) fib[0] = 0;
    if(n >= 2) fib[1] = 1;
    
    for(int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    cout << "Sequência de Fibonacci: ";
    for(int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;
    
    return 0;
}