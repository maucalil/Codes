#include <stdio.h>

int main() {

    int soma = 0;
    int i,n;
    
    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        soma += i;
    };

    printf("Soma = %d\n", soma);

    return 0;
}