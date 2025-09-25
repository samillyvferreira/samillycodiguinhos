#include <stdio.h>
int main () { 
int somaMatriz(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[3][3];
    printf("Digite os 9 elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int resultado = somaMatriz(matriz);
    printf("A soma de todos os elementos da matriz é: %d\n", resultado);
    return 0;
}