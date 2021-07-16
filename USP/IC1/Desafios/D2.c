#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int count[100];
    char msg[100];
    char filtro[100] = "BCDFGHJKLMNPQRSTVWXYZ";

    printf("Digite qualquer coisa: ");
    gets(msg);

    int mSize = strlen(msg);
    int fSize = strlen(filtro);

    for (int i = 0; i < fSize; ++i)
    {
        count[i] = 0;
    }

    for ( int i = 0; i < mSize; ++i)
    {
        for (int j = 0; j < fSize; ++j)
        {
            if (toupper(msg[i]) == filtro[j])
            {
                count[j]++;
            }
        }
    }
    
    printf("Segue as consoantes na palavra e suas respectivas quantidades:\n");
    for (int i = 0; i < fSize; ++i)
    {
        if (count[i] != 0)
            printf("Letra %c: %d\n", filtro[i], count[i]);
    }
}