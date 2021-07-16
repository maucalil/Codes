// Calcula as casas pretas de um tabuleiro de xadrez
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N{0}, M{0}, cp{0};

    cin >> N >> M;

    if (N == M) {

        if (N%2 == 0 && M%2 == 0) {
            cp = (N*M)/2;
        }
        else {
            cp = ((N*M)/2) + 1;
        }
    }
    else  {
        if (N%2 == 0 && M%2 == 0 || N%2 == 0 && M%2 != 0 || N%2 != 0 && M%2 == 0) {
            cp = (N*M)/2;
        }
        else {
            cp = (((N*M)/2) + 1);
        }
    }

    cout << cp << endl;

    return 0; // encerra a função main
}