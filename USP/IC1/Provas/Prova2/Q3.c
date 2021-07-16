// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>

#define N 500
int solve(int v1[N], int v2[N]);

int main() {
    int v1[N];
    int v2[N];

    printf("Digite os elementos do vetor1: ");
    for(int i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do vetor2: ");
    for(int i = 0; i < N; i++) {
        scanf("%d", &v2[i]);
    }

    // atribui o retorno da função para ans
    int ans = solve(v1, v2);

    // printa uma mensagem ao usuário de acordo com o resultado
    if (ans == 0) // se os vetores forem iguais
        printf("Os vetores são iguais.");
    else // se os vetores não forem iguais
        printf("Os vetores não são iguais.");

    return 0;
}

// recebe dois vetores e checa se são iguais
int solve(int v1[N], int v2[N]) {
    int count = 0; // contador será responsavel por saber se os vetores são iguais
    for (int i = 0; i < N; i++) { // itera pelos vetores de tamanho 500 e checa se cada elemento é igual
        if (v1[i] == v2[i]) {
            count++;
        }
    }

    if (count == N) // se o contador for 500, ou seja, se os vetores forem iguais
        return 0;
    else // se o contador não for 500, ou seja, se os vetores são diferentes
        return 1;
}