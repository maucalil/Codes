#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void marca(char palavra[], int tam, int marcador[]);
bool anagrama(int *marcador1, int *marcador2);

int main() {
    
    char palavra1[255];
    char palavra2[255];
    int tam1, tam2;
    int marcador1[26];
    int marcador2[26];
    
    printf("Digite uma palavra: ");
    scanf("%s", &palavra1);
    printf("Digite outra palavra: ");
    scanf("%s", &palavra2);

    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);
    if (tam1 != tam2) {
        printf("%s e %s não são anagramas.", palavra1, palavra2);
        return 1;
    }

    marca(palavra1, tam1, marcador1);
    marca(palavra2, tam2, marcador2);

    printf("%s e %s ", palavra1, palavra2);
    if (anagrama(marcador1, marcador2)) 
        printf("são anagramas.");
    else
        printf("não são anagramas.");
    printf("\n");

    return 0;
}

void marca(char *palavra, int tam, int *marcador) {
    
    for(int i = 0; i < 26; i++) {
        marcador[i] == 0;
    }
 
    for (int i = 0; i < 26; i++) {
        for(int j = 0; j < tam-1; j++) {
           if ( palavra[j] == alfabeto[i]) {
               marcador[i]++;
           }
        }      
    }
}

bool anagrama(int *marcador1, int *marcador2) {

    bool result = false;
    for (int i = 0; i < 26; i++) {
        if (marcador1[i] == marcador2[i]) {
            result = true;
        }
    }

    return result;
}