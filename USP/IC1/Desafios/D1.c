#include <stdio.h>
#include <string.h>

void main()
{

    char msg[100];
    char p[100]; // filtro do padrão
    
    printf("Digite uma mensagem: ");
    gets(msg);
    printf("Digite o padrão que quer encontrar: ");
    gets(p);

    int mSize = strlen(msg);
    int pSize = strlen(p);

    if (pSize > mSize)
    {
        printf("O padrão procurado é maior que a frase, tente novamente.\n");
        return main();
    }
    else
    {
        int aux, x, vezes = 0;

        for (int i = 0; i <= mSize - pSize; ++i)
        {
            if (msg[i] == p[0])
            {
                aux = i;
                x = 0;

                for (int j = 0; j < pSize; ++j)
                {           
                    if (p[j] == msg[aux]) // abc abcdeabc
                    {
                        x++;
                    }
                    aux++;
                }

                if (x == pSize) vezes++;
            }
        }
        if (vezes == 1) printf("O padrão apareceu 1 vez.\n");
        else printf("O padrão apareceu %d vezes.\n", vezes);

    }
}