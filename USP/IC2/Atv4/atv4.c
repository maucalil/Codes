#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int n);
void mostraMatriz(float **matriz, int n);
void preencheMatriz(float **matriz, int n);
float **calculaTransposta(float **matriz, int n);
float **multiplicaMatriz(float **matriz_A, float **matriz_B, int n);
float calculaTraco(float **matriz, int n);

int main()
{

    int n;
    printf("Digite o valor de n para a matriz quadrada de tamanho n: ");
    scanf("%d", &n);

    printf("------------------Matriz A------------------");
    float **A = alocaMatriz(n);
    preencheMatriz(A, n);
    mostraMatriz(A, n);

    printf("------------------Matriz B------------------");
    float **B = alocaMatriz(n);
    preencheMatriz(B, n);
    mostraMatriz(B, n);

    // Transposta
    printf("\n\n------------------Printando matriz transposta de A------------------");
    float **transposta = calculaTransposta(A, n);
    mostraMatriz(transposta, n);

    // Multiplicada
    printf("\n\n------------------Printando matriz multiplicada (AxB)------------------");
    float **multiplicada = multiplicaMatriz(A, B, n);
    mostraMatriz(multiplicada, n);

    // Traço da matriz
    printf("\n\n------------------Printando traço da matriz B------------------");
    float traco = calculaTraco(B, n);
    printf("\nO traço da matriz B é %g\n", traco);
    
    return 0;
}

float **calculaTransposta(float **matriz, int n)
{

    float **matriz_transposta = alocaMatriz(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    return matriz_transposta;
}

float **multiplicaMatriz(float **matriz_A, float **matriz_B, int n) {

    float **matriz_multiplicada = alocaMatriz(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz_multiplicada[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matriz_multiplicada[i][j] += matriz_A[i][k] * matriz_B[k][j];
            }
        }
    }
    return matriz_multiplicada;
}

float calculaTraco(float **matriz, int n) {
    float traco = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if( i == j ){
                traco += matriz[i][j];
                break;
            }
        }
    }
    return traco;
}

/* --------------- Funções auxiliares --------------- */
float **alocaMatriz(int n)
{
    float **matriz = malloc(n * sizeof(float *)); // aloca as linhas da matriz
    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(n * sizeof(float));
    }

    return matriz;
}

void mostraMatriz(float **matriz, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%g ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencheMatriz(float **matriz, int n)
{
    printf("\n\nDigite os elementos da matriz: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }
}