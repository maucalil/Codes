// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>

#define N 1000 
void solve(double *v);

int main() {

    double v[N];  // declara o vetor de 1000 números reais

    // pede os 1000 elementos do vetor
    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < N; i++) {
        scanf("%lf", &v[i]);
    }
 
    solve(v); // chamada da funçao

    return 0;
}

// função recebe um vetor e faz a troca dos termos impares com os pares 2 a 2
void solve(double *v) {
    double aux;
    double soma = 0;
    for (int i = 0; i < N-1; i += 2) {
         // para cada posição par, faz a troca com os impares vizinhos
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
    }

    printf("Os elementos do vetor novo são: ");
    for (int i = 0; i < N; i ++) {
        soma += v[i]; // calcula a soma dos vetores 
        printf("%g", v[i]);
    }
    printf("\nA soma dos elementos do vetor é %g.", soma);
}