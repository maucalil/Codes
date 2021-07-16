#include <stdio.h>

int main() {

    int soma = 0;
    int n;
    
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);

    if (n%2 == 0) {
        soma = (n/2)*(-1);
    }
    else {
        soma = (n/2) * (-1) + n;
    }

    printf("Soma = %d\n", soma);

    return 0;
}