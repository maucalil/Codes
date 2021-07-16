#include <stdio.h>

int main() {

    int soma = 0;
    int i,n;
    
    printf("Digite a quantidade de números ímpares a serem somados: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        soma += (2*i - 1);
    };

    printf("Soma = %d\n", soma);

    return 0;
}