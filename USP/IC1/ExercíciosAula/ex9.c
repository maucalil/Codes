#include <stdio.h>

int main()
{
    unsigned long long n;
    double fatorial = 1, soma = 0;
    
    printf(" Digite um número para calcular a soma das frações fatoriais: ");
    scanf("%ld", &n);    

    for ( int i = 1; i<=n; i++ )
    {
        fatorial *= i; 
        soma += 1.0/fatorial;
    }
        
    printf(" Resultado: %lf", soma);
    printf("\n");
    return 0;
}