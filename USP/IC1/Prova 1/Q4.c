// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>
#include <math.h>

int main()
{
    // inicializa, pede e guarda a variável n que será o número de linhas e colunas da matriz
    int n;
    printf("Digite o tamanho da matriz NxN: ");
    scanf("%d", &n);
    
    // declara a matriz
    float matriz[n][n];

    // pede que o usuário preencha cada elemento da matriz e o atribui a matriz
    printf("\nPreencha a matriz:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int elemento;
            scanf("%d", &elemento);
            matriz[i][j] = elemento;
        }
    }

    // printa a matriz transposta ao usuário
    printf("A matriz transposta da matriz dada é: \n\n");        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%g ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}