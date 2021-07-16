#include <stdio.h>
#include <stdlib.h>

double solve(double *p, int tam);

int main() {
    int n, m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);

    double matriz[n][m];

    printf("Digite cada elemento da matriz: ");
    for(int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    printf("A soma dos elementos da matriz é %g\n", solve(matriz[0], n*m));

    return 0;
}

double solve(double *p, int tam) {
    double soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += *p;
        p++;
    }
    return soma;
}