// Calcula as casas pretas de um tabuleiro de xadrez
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N{0}, M{0}, cp{0};

    cout << "Digite a largura do tabuleiro: "; // pega o nmr de linhas do tabuleiro
    cin >> N;
    cout << "Digite o comprimento do tabuleiro: "; // pega o nmr de colunas do tabuleiro
    cin >> M;

    int tabuleiro[N][M];

    if(!( N>=1 && N<= pow(10,5) && M <= pow(10,4) )) {

        cout << "Valores inválidos.\n";
    }

    for(int i = 0; i < N; i++) { // itera em cada linha

        for(int j = 0; j < M; j++) { // itera em cada coluna

            
            if (i%2 == 0 && j%2 == 0 || i%2 != 0 && j%2 != 0) { // se linha e coluna simultaneamente pares ou ímpares adiciona um ao contador de casas preta
                cp++;
            }          
        }     
    }

    cout << "Há " << cp << " casas pretas no tabuleiro.\n";

    return 0; // encerra a função main
}