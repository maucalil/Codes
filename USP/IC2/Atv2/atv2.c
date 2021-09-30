#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double* prefixMedia1(double* X, int n);
double* prefixMedia2(double* X, int n);
void preenche_vetor(int n, double *X);

int main() {
    clock_t tempo1, tempo2;
    double tempo_total;

    int n = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double* X = (double*)malloc(n * sizeof(double));
    preenche_vetor(n, X);

    printf("\nIniciado o primeiro algoritimo:\n");
    tempo1 = clock();
    double* A1 = prefixMedia1(X, n);
    tempo2 = clock();
    printf("Primeiro algoritimo finalizado.");
    tempo_total = difftime(tempo2, tempo1) / CLOCKS_PER_SEC;
    printf("\nTempo total do primeiro algoritmo: %lf\n", tempo_total);
    free(A1);

    printf("\nIniciado o segundo algoritimo:\n");
    tempo1 = clock();
    double* A2 = prefixMedia2(X, n);
    tempo2 = clock();
    printf("Segundo algoritimo finalizado.");
    tempo_total = difftime(tempo2, tempo1) / CLOCKS_PER_SEC;
    printf("\nTempo total do segundo algoritimo: %lf\n", tempo_total);
    free(A2);

    free(X);
    return 0;
}


double* prefixMedia1(double* X, int n) {

    double* A = (double*)malloc(n * sizeof(double));
    double a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a += X[j];
        }
        A[i] = a / (i+1);
    }

    return A;
}

double* prefixMedia2(double* X, int n) {

    double* A = (double*)malloc(n * sizeof(double));
    double s = 0;

    for (int i = 0; i < n; i++) {
        s += X[i];
        A[i] = s / (i+1);
    }
    
    return A;
}

void preenche_vetor(int n, double *X) {
    for (int i = 0; i < n; i++) {
        X[i] = 1;
    }
}