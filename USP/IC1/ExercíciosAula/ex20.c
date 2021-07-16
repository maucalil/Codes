#include <stdio.h>
#include <stdlib.h>

int main() {

    double matriz[6][6];

    printf("Digite cada elemento da matriz: ");
    for(int i = 0; i < 6; i ++) {
        for (int j = 0; j < 6; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    solve(matriz);
    return 0;
}

void solve(double matriz[6][6]) {

    double sum_pri = 0;
    double sum_sec = 0;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if (i == j) {
                sum_pri += matriz[i][j];
            }

        }
        sum_sec += matriz[i][6-1-i];
    }

    printf("A soma da diagonal principal é %g\n", sum_pri);
    printf("A soma da diagonal secundária é %g\n", sum_sec);
}
