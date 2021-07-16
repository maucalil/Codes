#include <stdio.h>

int main() 
{
    double s = 0;
    int n, i;

    printf("\nDigite a quantidade de frações a serem somadas até o denominador n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        s += 1.0/i;
    }

    printf("Soma = %lf\n\n", s);

    return 0;
} 