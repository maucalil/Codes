#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void solve(int mA[4][6], int mB[6][4], int mC[4][4]);
void preenche(int n, int m, int matriz[n][m]);
void print_mtx(int n, int m, int matriz[n][m]);

int main() {
    int mA[4][6];
    int mB[6][4];
    int mC[4][4];

    printf("\n\nMatriz A:\n");
    preenche(4, 6, mA);
    print_mtx(4, 6, mA);

    printf("\n\nMatriz B:\n");
    preenche(6, 4, mB);
    print_mtx(6, 4, mB);

    solve(mA, mB, mC);
    printf("\n\nMatriz C:\n");
    print_mtx(4, 4, mC);

    return 0;
}

void solve(int mA[4][6], int mB[6][4], int mC[4][4]) {

    for (int i = 0; i < 4; i++) { // linhas da matriz A
        for (int j = 0; j < 4; j++) { // colunas da matriz B
            mC[i][j] = 0;
            for (int k = 0; k < 6; k++) { // linhas da matriz B
                mC[i][j] +=  mA[i][k] * mB[k][j];
            }
        }
    }
}

void preenche(int n, int m, int matriz[n][m]) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

void print_mtx(int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d] = %3d     ", i, j, matriz[i][j]);
        }
        printf("\n");
    }
}