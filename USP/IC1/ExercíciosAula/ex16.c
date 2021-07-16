#include <stdio.h>
#include<stdbool.h>

bool perfeito(int num);

int main()
{
    int count = 1;
    for (unsigned long long i = 1; i <= 1000000; i++){
        if (perfeito(i)) {
            printf("O %d° número perfeito de 1 a 100 é %d.\n", count, i);
            count++;
        }

    }

    return 0;
}

bool perfeito(int num) {
   
    int soma_divisores = 0;
    for (int i = 1; i <= num/2; i++) {
        if (num%i == 0)
        {
            soma_divisores += i;
        }
    }

    if(soma_divisores == num) {
        return true;
    }
    return false;
}
