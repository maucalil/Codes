// ALuno: Maurício Calil Manfrim Lucera
// ID USP: 11813306

#include <stdio.h>
#include <string.h>

int repetido(int num);

// define o vetor global que guardará os elementos da interseção
int intersec[255]; 
// define a variável que guardará a quantidade de elementos no vetor interseção
int aux = 0;

int main()
{
    // inicializa n e m
    int n, m;

    // pede n e m e atribui seus valores
    printf("Digite n: ");
    scanf("%d", &n);
  
    // declara e lê vetor de n posições
    printf("Digite os n elementos do vetor: ");
    int v1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("Digite m: ");
    scanf("%d", &m);
 
    // declara e lê vetor de m posições
    printf("Digite os m elementos do vetor: ");
    int v2[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &v2[i]);
    }
    
    // le cada elemento dos 2 vetores e compara eles
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* 
            se os elementos forem iguais, chama a função repetido() para verificar
            se aquele elemento já foi passado uma vez. Se o resultado for 1, 
            significa que aquele elemento é repetido, saindo do loop atual
            */
            if (v1[i] == v2[j])
            {
                if (repetido(v1[i]) == 1)
                {
                    break;
                }
            }
        }
    }

    // printa o vetor interseção 
    printf("Os elementos vetor interseção são: ");
    for(int i = 0; i < aux; i++)
    {
        printf("%d ", intersec[i]);
    }
    printf("\n");
    
    return 0;
}

int repetido(int num)
{    
    // só realiza o loop se não for a primeira chamada da função
    if(aux != 0)
    {
        for (int i = 0; i < aux; ++i)
        {
            // se o número passado já estiver no vetor interseção, retorna 1
            if (num == intersec[i])
            {
                return 1;
            }
        }
    }

    // adiciona o número passado a função ao vetor global v se for a 
    // primeira chamada da função ou se o elemento não for repetido
    intersec[aux] = num;
    // soma um à variável aux que guardará a quantidade de elementos
    // adicionados ao vetor v(interseção)
    aux++; 

    // se o número não tiver no vetor interseção, retorna 0
    return 0;
}