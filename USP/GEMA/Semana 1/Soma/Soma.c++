// Faz a soma de dois números dados pelo usuário
#include <iostream>

using namespace std;

int main() {

    int n1{0}, n2{0}; // declara duas variáveis que receberão os números a serem somados

    // pede os 2 números e printa a soma deles
    cout << "Digite dois números:";
    cin >> n1 >> n2;
    cout << "Soma " << n1 + n2 << endl;

    return 0; // encerra a função main
}