#include <stdio.h>
int main() {
    float preco, novo_preco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    if (preco < 100) {
        novo_preco = preco * 1.10; // aumenta 10%
    } else {
        novo_preco = preco * 1.20; // aumenta 20%
    }
    printf("O preco inflacionado eh: %.2f\n", novo_preco);
    return 0;
}