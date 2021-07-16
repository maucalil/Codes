// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>
#include <math.h>

int main()
{
    int opt = 0; // variável que lerá a opção que o usuário deseja;
                 // continuar ou encerrar o programa
    
    // realiza o exercício enquanto o usuário não digitar -1
    while (opt != -1)
    {   
        // declara, pede e guarda o valor do número digitado
        int n;
        printf("Digite o valor do número: ");
        scanf("%d", &n);

        // checa se o usuário digitou um número inteiro positivo
        while (n < 0)
        {
            printf("Você digitou um número negativo. Tente novamente.");
            scanf("%d", &n);
        }

        // se o número digitado for menor que 30, calcula e printa o fatorial
        // desse número
        if (n < 30)
        {
            long long fatorial = 1;
            
            for(int i = 1; i <= n; i++){
                fatorial *= i;
            }
            
            printf("%d! = %d\n", n, fatorial);
        }
        // se o número digitado for maior ou igual a 30, calcula e prita a
        // soma de -5 até esse número
        else
        {
            int sum = 0;
            for(int j = -5; j <= n; j++)
            {
                sum += j;
            }
            printf("A soma de -5 até %d é: %d\n", n, sum);
        }

        // pede o valor da variável opt (-1 encerrará o loop e 1 voltará para o inicio dele)
        printf("Digite -1 se deseja sair ou 1 se deseja digitar outro número: ");
        scanf("%d", &opt);

    }
    return 0;
}