#include <stdio.h>

int main()
{
    long n, fatorial = 1;
    
    printf("Digite um número para calcular seu fatorial: ");
    scanf("%ld", &n);
    
    for(int i = 1; i<=n; i++){
        fatorial = fatorial * i;
    }
    
    printf("%ld! = %ld\n", n, fatorial);
    return 0;
}