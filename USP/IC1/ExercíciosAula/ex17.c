#include <stdio.h>
#include <stdlib.h>

int auxA = 0;
int auxB = 0;

void solve(int *x, int *a, int *b);
int n;

int main() {
    scanf("%d", &n);
    int x[n];
    int a[n];
    int b[n];

    printf("Digite o vetor X: ");
    for (int i = 0; i < n; i++) {
        scanf("%d ", &x[i]);
    }

    solve(x, a, b);

    printf("\n\nO vetor COMPLETO é: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n\nO vetor PAR é: ");
    for (int i = 0; i < auxA; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\nO vetor ÍMPAR é: ");
    for (int i = 0; i < auxB; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

void solve(int *x, int *a, int *b) {

    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            a[auxA] = x[i];
            auxA++;
        }
        else {
            b[auxB] = x[i];
            auxB++;
        }
    }
}