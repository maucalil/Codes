#include <stdio.h>

void solve(char a, char b);

int main() {

    char char1, char2;
    printf("Digite dois chars: ");
    scanf("%c %c", &char1, &char2);

    solve(char1, char2);

    return 0;
}

void solve(char char1, char char2) {

    if (char2-char1 >= 0) {
        printf("Há %d letras entre %c e %c.\n", char2-char1-1, char1, char2);
    } 
    else {
        printf("Erro, tente novamente.");
    }
}