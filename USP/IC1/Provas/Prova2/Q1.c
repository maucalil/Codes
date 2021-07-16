// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>

double solve(int n);

int main() {
    int n; // número que indica até onde o usuário quer aplicar a fórmula
    printf("Digite o valor de n:");
    scanf("%d", &n);

    // atribui o resultado da função a variável ans e printa a resposta
    double ans = solve(n);
    printf("A soma final tem resultado %g\n", ans);

   return 0;
}

// função recebe um inteiro n e aplica a fórmula de 1 até n números
double solve(int n) {
    double soma = 0; // define uma variavel que vai receber a soma

    // itera pelo vetor
    for (int i = 1; i <= n; i++) {
        // se i for ímpar, faz a soma do termo seguinte 
        if (i%2 != 0) {
            soma += (float)(2*i)/((2*i)-1);
        }
        // se i for par, faz a subtração do termo seguinte
        else {
            soma -= (float)(2*i)/((2*i)-1);
        }
    }
    return soma;
}