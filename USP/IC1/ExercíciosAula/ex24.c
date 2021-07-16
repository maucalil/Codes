#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void solve(char *palavra);

int main() {
    char palavra[256];
    fgets(palavra, 256, stdin);

    solve(palavra);

    return 0;
}

void solve(char *palavra) {
    int tam = strlen(palavra);
    palavra[tam - 1] = '\0';

    printf("\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < i; j++) {
            printf("%s ", palavra);
        }
        printf("\n");
    }
}