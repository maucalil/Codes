#include <stdio.h>
#include <string.h>

void main()
{
    char msg[100];
    printf("Digite uma mensagem: ");
    gets(msg);

    int aux1 = 0, aux2 = 0, x = 0;
    int size = strlen(msg);

    printf("    %s: ", msg);
    for (int i = 0; i <= size; ++i)
    {
        if (msg[i] == ' ' || msg[i] == '\0')
        {
            if (x == 0)
            {
                for (int j=i-1; j >= 0; --j) // abacaxi gostoso i=7 j=6 j>=
                                                // i = 14 j=13 j>=7
                {
                    printf("%c", msg[j]);
                }
                aux2 = i;
                printf(" ");
            }
            else
            {
                aux1 = i;
                for (int j=i-1; j >= aux2; --j) 
                {
                    printf("%c", msg[j]);
                }
                aux2 = i;
            }
            x++;                
        }   
    }
    printf("\n");
}