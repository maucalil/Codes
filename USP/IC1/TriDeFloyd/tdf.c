// imprime um triângulo de floyd para n linhas
#include <stdio.h>

main()
{
    int n = 0, naturais = 0;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            naturais++;
            printf(" %d", naturais);
        }
        printf("\n");
    }
}