#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // seeds srand com time(NULL)
    unsigned int randomN = rand() % 100; // gera um número aleatório de 0 a 100
    unsigned int chute = 0, tentativas = 0; // cria uma variável para guardar o
                                            // o valor do chute e outra para 
                                            // contar a quantidade de tentativas

    printf("    Tente acertar o número de 0 a 100: ");

    // faz um loop do tipo do-while para continuar pedindo um chute ao usuário até ele acertar
    do
    {
        scanf(" %d", &chute);

        if (chute > randomN) // se o chute for maior que o número gerado pelo programa, informa ao
                             // usuário e pede para tentar novamente
        {
            printf("    Você chutou um número maior que o correto. Tente novamente: ");
        }
        else if (chute < randomN) // se o chute for menor que o número gerado pelo programa, informa ao
                                  // usuário e pede para tentar novamente
        {
            printf("    Você chutou um número menor que o correto. Tente novamente: ");
        }
        else // se o chute for igual ao número gerado pelo programa, printa uma felicitação
        {
            printf("    Parabéns! Você acertou!\n");
        }
        tentativas++; // adiciona um ao contador de tentativas sempre que o loop rodar
    } while(chute != randomN);
    
    printf("Total de tentativas: %d\n", tentativas);// printa em qual tentativa o usuário acertou
                                                    // exemplo: se o usuário acertou quando digitou o
                                                    // 5° número, sairá que houve 5 tentativas
    return 0;
}