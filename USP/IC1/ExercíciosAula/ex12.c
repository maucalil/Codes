#include <stdio.h>

void main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vec[n];


    for ( int i = 0; i < n; ++i)
    {
        printf("Preencha o vetor com um inteiro: ");
        scanf("%d", &vec[i]);
    }
    int max = vec[n-1];
    int min = vec[0];

    for ( int i = 0; i < n; ++i)
    {
        if (vec[i] > max) max = vec[i];
    
        else if (vec[i] < min) min = vec[i];
    }

    int med = (max + min) /2;

    printf("\n O maior termo do vetor é: %d", max);
    printf("\n O menor termo do vetor é: %d", min);
    printf("\n O termo médio do vetor é: %d\n\n", med);

}