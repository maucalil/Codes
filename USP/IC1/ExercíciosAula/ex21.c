#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int solve(int matriz[7][6]);

int main() {
    int matriz[7][6];

    srand(time(NULL));
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 100;
            printf("matriz[%d][%d] = %d     ", i, j, matriz[i][j]);
        }
        printf("\n");
    }
    
    int ans = solve(matriz) - matriz[4][2];
    printf("A soma dos elementos da 5° linha e da 3° coluna é: %d.\n", ans);
    
    return 0;
}

int solve(int matriz[7][6]) {
    int soma = 0;
    for (int i = 0; i < 6; i++) {
        soma += matriz[4][i];
    }
    for (int i = 0; i < 7; i++) {
        soma += matriz[i][2];
    }

    return soma;
}