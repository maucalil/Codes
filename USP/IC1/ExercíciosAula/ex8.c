#include <stdio.h>

double fat(int x);

main()
{
    int n = 0, k = 0;

    do 
    {
        printf(" Digite n e k para fazer a combinação de n em k: ");
        scanf("%d %d", &n, &k);
    } while (n < k || n < 0 || k < 0);

    double ans = fat(n)/(fat(k)*fat(n-k));

    printf(" Resultado: %g", ans);
    printf("\n");
}

double fat(int x)
{
    double fatorial = 1;

    for(int i=1; i<=x; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}