// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n; // valores que serão pedidos ao usuário conforme o exercício
    double e = 1; // variável que guardrá o valor de e^x
    long long fat = 1; // variável que guardará o fatorial durante o loop

    // pede e guarda os valores de x e n
    printf("Digite o valor de x: "); 
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // calcula e^x n vezes
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
        e += pow(x,i)/fat;
    }

    // printa o resultado
    printf("e^x = %g\n", e);

    return 0;
}