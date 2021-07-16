#include <stdio.h>
#include <math.h>

int main()
{
    // mensagem de início do programa
    printf("\nSeja bem-vindo ao programa do Trabalho 1 de IC1 do Prof. Zhao!\n");

    double nmr[5];
    // le os 5 números do usuário
    for ( int i = 0; i < 5; ++i)
    {
        printf("\nDigite o %d° número: ", (i+1));
        scanf("%lf", &nmr[i]);
    }

    int opt = 0; // a variável opt serve para repetir o programa até o usuário
                 // atribuir valor 2 a ela no final da execução do código na
                 // linha 147, o que encerrará o programa e imprimirá uma mensagem
                 // de êxito 
    while(opt != 2)
    {

        // Printa o menu ao usuário
        int menu;
        printf("\nSelecione uma opção do menu: ");
        printf("\n    0 - reler os 5 números");
        printf("\n    1 - média aritmética");
        printf("\n    2 - média ponderada");
        printf("\n    3 - desvio padrão");
        printf("\n    4 - maior valor");
        printf("\n    5 - menor valor");
        printf("\n    6 - sair do programa\n");
        scanf("%d", &menu);

        // Checa se o usuário encerrou o programa
        if (menu == 6)
        {
            printf("O programa foi finalizado com sucesso! Até mais!\n");
            return 1;
        }
        // Checa se o usuário digitou uma opção válida
        else if (menu != 0 && menu != 1 && menu != 2 && menu != 3 && menu != 4 && menu != 5)
        {
            return main();
        }
        // Se o usuário digitou uma opção válida e não finalizou o programa, continua
        else
        {
            // se o usuário escolheu a primeira opção, apenas printa os 5 números digitados
            if (menu == 0)
            {
                return main();
            }  

            // se o usuário escolheu a segunda opção, calcula a média aritmética dos 5 números
            else if ( menu == 1)
            {
                double soma = 0;

                for ( int i = 0; i < 5; ++i)
                {
                    soma += nmr[i];
                }

                double mA =  soma / 5;
                printf("A média aritmética dos 5 números é: %g\n", mA);
            }
            // se o usuário escolheu a terceira opção, pede os pesos da média ponderada
            // a calcula e a printa
            else if ( menu == 2)
            {
                int pesos[5];
                int div = 0;
                double soma = 0;
                
                for ( int i = 0; i < 5; ++i)
                {
                    printf("\nDigite o peso para o %d° número: ", i+1);
                    scanf("%d", &pesos[i]);
                    div += pesos[i];
                    soma += nmr[i]*pesos[i];
                }

                double mP = soma/div;
                printf("A média ponderada dos 5 números é: %g\n", mP);
            }

            // se o usuário escolheu a quarta opção, calcula o desvio padrão dos 5 números digitados
            // dos 5 números digitados
            else if (menu == 3)
            {
                double soma = 0;

                for ( int i = 0; i < 5; ++i)
                {
                    soma += nmr[i];
                }

                double media =  soma / 5;
                double dist[5];
                double soma2 = 0;

                for ( int i = 0; i < 5; ++i)
                {
                    dist[i] = pow((media-nmr[i]),2);
                    soma2 += dist[i];
                }

                double dp = sqrt(soma2/5);
                printf("O desvio padrão dos 5 número é: %g\n", dp);
            }

            // se o usuário escolheu a quinta opção, printa o número de maior valor
            else if (menu == 4)
            {
                double max = nmr[4];
                for ( int i = 0; i < 5; i++)
                {
                    if (nmr[i] > max)
                    {
                        max = nmr[i];
                    }
                }
                printf("O maior valor entre os 5 é: %g\n", max);
            }

            // se o usuário escolheu a sexta opção, printa o número de menor valor
            else
            {
                double min = nmr[0];
                for ( int i = 0; i < 5; i++)
                {
                    if (nmr[i] < min)
                    {
                        min = nmr[i];
                    }
                }
                printf("O menor valor entre os 5 é: %g\n", min);
            }

            // pergunta se o usuário quer realizar outra opção do menu ou encerrar o programa
            printf("\nDeseja acessar o menu novamente ou encerrar o programa?");
            printf("\n  1 - Acessar o menu novamente");
            printf("\n  2 - Encerrar o programa\n");
            scanf("%d", &opt);

            // encerra o loop se o usuário digitar 2
            if (opt == 2)
            {
                printf("\nO programa foi finalizado com sucesso! Até mais!\n");
            }
        }
    }

    return 0;
}   