#include <stdio.h>
#include <string.h>

void main()
{
    char msg[100];
    printf("Digite uma mensagem: ");
    gets(msg);

    int size = strlen(msg);

    printf("O inverso de %s é: ", msg);
    for (int i = size-1; i >= 0; --i)
    {
        printf("%c", msg[i]);
    }
    printf(".\n");
}