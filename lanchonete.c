#include <stdio.h>
int main ()
{ 
    int codigo, quantidade;
    double total, preco;
    printf("Digite o codigo do produro: ");
    scanf("%d", &codigo);
    printf("DIgite a quantidade: ");
    scanf("%d", &quantidade);
    if (codigo == 1) {
        preco = 5.00;
    } else if (codigo == 2) {
        preco = 3.50;
    } else if (codigo == 3) {
        preco = 4.80;
    } else if (codigo == 4) {
        preco = 8.90;
    } else if (codigo == 5) {
        preco = 7.32;
    } else {
        preco = 0.0;
    }
    total = quantidade * preco;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}