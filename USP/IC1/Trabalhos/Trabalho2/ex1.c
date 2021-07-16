// ALuno: Maurício Calil Manfrim Lucera
// ID USP: 11813306

#include <stdio.h>
#include <string.h>

const int tam = 255;

int position(char string[], char substring[]);

int main()
{

    // declara a string e a substring
    char string[tam];
    char substring[tam]; 
    
    // pede e le a string e a substring
    printf("Insira uma string: ");
    fgets(string, tam, stdin);
    printf("Insira um substring que deseja encontrar: ");
    gets(substring, tam, stdin);

    // atribui o tamanho da string à strSize e da substring à substrSize
    int strSize = strlen(string);
    int substrSize = strlen(substring);

    // remove o \n lido pelo fgets() das string e da substring
    string[strSize-1] == "";
    substring[substrSize-1] == "";

    // checa se a substring é menor que a string
    if (substrSize > strSize)
    {
        printf("A substring é maior do que a string digitada. Tente novamente.\n");
        return main();
    }
    // acha a posição da substring na string chamando a função position e atribui a p
    int p = position(string, substring);

    // se position() retornar 0, significa que a substring não foi encontrada na string
    // e printa uma mensagem dizendo isso
    if (p == 0) 
    {
        printf("A substring não foi encontrada na string.\n");
    }
    // se position() não retornar 0, retorna a posição da substring e printa
    else
    {
        printf("A substring ocorre pela primeira vez na %d° posição da string.\n", p+1);
    }

    return 0;
}

// define a função position que achará a posição da substring na string, se existir
int position(char string[], char substring[])
{
    // declara e inicializa os tamanhos da string e substring nas variáveis
    int strSize = strlen(string);
    int substrSize = strlen(substring);

    // declara uma variável auxiliar que ajudará ler as string
    // declara vezes que será responável por conferir se cada elementro da
    // substring está na string
    int aux, vezes;

    // faz o loop pela string até chega em "strSize - substrSize"
    // que será a maior posição em que a substring se encaixa
    // até o fim da string
    for (int i = 0; i <= strSize - substrSize; ++i)
    {
        // se o char atual da string for igual ao 1° da substring,
        if (string[i] == substring[0])
        {
            aux = i;
            vezes = 0;

            // chega se cada char da substring são iguais a cada char da string a partir
            // a posição encontrada anteriormente até o tamanho da substring
            for (int j = 0; j < substrSize; ++j)
            {   
                // se forem iguais, adiciona 1 à vezes        
                if (substring[j] == string[aux]) 
                {
                    vezes++;
                }
                // adiciona um a aux para ir para o próximo elemento da string
                // no próximo loop
                aux++;
            }

            // se o número de vezes que cada char da string  foi igual ao tamanho
            // da substring, retorna a posição do primeiro char da substring
            if (vezes == substrSize) 
            {
                return i;
            }
        }
    }

    // se não passar por nenhuma das condições anteriores, significa que a substring
    // não foi encontrada na string, retornando 0 à função
    return 0;
}