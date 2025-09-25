#include <stdio.h>
int main() {
    int matriz[3][3], i, j, soma_principal = 0, soma_secundaria = 0;
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    for(i = 0; i < 3; i++) {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][2 - i];
    }
    printf("Soma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundaria: %d\n", soma_secundaria);
    return 0;
}