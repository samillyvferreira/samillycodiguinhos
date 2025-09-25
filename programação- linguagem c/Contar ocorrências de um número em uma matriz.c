#include <stdio.h>

int contaOcorrencias(int matriz[4][4], int numero) {
    int cont = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    int matriz[4][4], i, j, num;
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);
    printf("Digite o número para buscar: ");
    scanf("%d", &num);
    int resultado = contaOcorrencias(matriz, num);
    printf("O número %d aparece %d vezes na matriz.\n", num, resultado);
    return 0;
}