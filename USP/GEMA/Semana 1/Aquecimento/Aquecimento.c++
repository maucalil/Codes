// Calcula a área de um retângulo com largura e altura dados pelo usuário
#include <iostream>

using namespace std;

int main() {

    int L{0}, A{0};

    cout << "Digite a largura do retângulo: ";
    cin >> L;
    cout << "Digite a altura do retângulo: ";
    cin >> A;

    cout << "Área do retângulo " << L*A << endl;

    return 0;
}