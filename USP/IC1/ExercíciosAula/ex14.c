#include <stdio.h>

void main()
{
    int l, c;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &l);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &c);

    int matriz[l][c];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Os elemento da diagonal são: ");
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (i  == j)
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}