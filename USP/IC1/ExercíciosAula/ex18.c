#include <stdio.h>
#include <stdlib.h>

int solve(int *x, int tam);

int main() {

    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int x[n];

    printf("Digite o vetor X: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int pares = solve(x, n);
    printf("A quantidade de termos pares é %d\n", pares);

    return 0;
}

int solve(int *x, int tam) {
    int count = 0;
    for (int i = 0; i < tam; i++) {
        if (x[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}