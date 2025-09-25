#include <stdio.h>
int main() {
    int matriz[3][3], i, j, temp;
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    for(i = 0; i < 3; i++) {
        temp = matriz[i][0];
        matriz[i][0] = matriz[i][2];
        matriz[i][2] = temp;
    }
    printf("Matriz com linhas invertidas:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}