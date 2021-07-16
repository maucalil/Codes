#include <stdio.h>

int main() 
{
    int x = 0, y= 0, z = 0;

    printf("Digite valores para x, y e z, respectivamente: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
    {
        printf("Todos os números são iguais a %d", x);
        printf(".\n");
    }
    else if (x > y && x > z) 
    {
        printf("%d é o maior valor entre %d , %d e %d.\n", x, x, y, z);
    }
    else if (y > x && y > z)
    {
        printf("%d é o maior valor entre %d , %d e %d.\n", y, x, y, z);
    }
    else
    {
        printf("%d é o maior valor entre %d , %d e %d.\n", z, x, y, z);
    }

    return 0;
}