// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta; // declara as variáveis que vão guardas os coeficientes
                           // e o delta da equação

    // pede e guarda o valor de cada um dos coeficientes
    printf("Digite o coeficiente de x²: ");
    scanf("%lf", &a);

    printf("Digite o coeficiente de x¹: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente independente: ");
    scanf("%lf", &c);

    delta = (b*b) - (4*a*c); // calcula o delta
    double r1, r2; // declara as raízes da equação

    // calcula as raízes e as printa se existirem raízes reais (delta >= 0)
    if (delta  >= 0)   {

        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);

        printf("A equação dada é %gx² + %gx + %g  e suas raízes são %g e %g.\n", a, b, c, r1, r2);
    }
    // se delta < 0, printa que não existe raízes reais
    else {

        printf("A equação não possui soluções reais\n");
    }

    return 0;
}
