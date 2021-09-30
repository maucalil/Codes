#include "stdio.h"
#include <stdlib.h>

int function(int *v, int n, int x);

int main() {
    int n, x;
    printf("Digite tamanho n do vetor: ");
    scanf("%d", &n);
    
    printf("Digite o elemento x: ");
    scanf("%d", &x);

    int* v = (int*)malloc(n * sizeof(int));

    int result = function(v, n, x);

    if( result != -1) {
        printf("O elemento x aparece no índice %d do vetor", result);
        return 0;
    }

    return 1;
}

int function(int *v, int n, int x) {

    for( int i = 0; i < n; i++) {
        if( v[i] == x) {
            return i;
        }
    }
    return -1;
}