#include <iostream>

using namespace std;

int main() {

    int n1{0}, n2{0}, n3{0}; // variáveis que receberão os 3 números do usuário
    int t; // variável temporária para guardar um número e ordená-lo

    cout << "Digite 3 números inteiros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2) {

        t = n2;
        n2 = n1;
        n1 = t;
    }
    
    if (n1 > n3) {

        t = n3;
        n3 = n1;
        n1 = t;
    }

    if (n2 > n3) {
        
        t = n3;
        n3 = n2;
        n2 = t;
    }

    cout << "\n" << n3 << "\n" << n2 << "\n" << n1 << endl;

    return 0;
}