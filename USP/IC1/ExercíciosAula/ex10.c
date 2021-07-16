#include <stdio.h>

double fat(int x);

int main()
{
    int n = 0;
    double soma = 0;
    
    printf(" Digite n: ");
    scanf("%ld", &n);
    
    for(int i = 1; i <=n; i++)
    {
        soma += i/fat(2*i -1);
    }
    
    printf(" Resultado: %lf", soma);
    printf("\n");
    return 0;
}

double fat(int x)
{
    double fatorial = 1;

    for(int i=1; i<=x; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}