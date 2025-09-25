#include <stdio.h>
int main () { 
   int matriz[4][4], maior, i, j;
    printf("Digite os 16 elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf("O maior valor da matriz é: %d\n", maior);
    return 0;
}