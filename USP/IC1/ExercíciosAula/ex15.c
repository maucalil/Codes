#include <stdio.h>

double volume(double r);
#define PI 3.14;

int main()
{
    double r;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &r);

    printf("O volume da esfera é: %g\n", volume(r));
}

double volume(double r)
{
    return (4*r*r*r)/3  * PI;
}