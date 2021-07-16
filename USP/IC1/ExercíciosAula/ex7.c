// Calcula a soma de n frações alternando entre soma e diferença começando com 1/1 positivo
#include <stdio.h>

int main() 
{
    double s = 0;
    int n, i;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            s -= 1.0/i;
        }
        else
        {
            s += 1.0/i;
        }
        
    }

    printf("Soma = %lf\n\n", s);

    return 0;
}