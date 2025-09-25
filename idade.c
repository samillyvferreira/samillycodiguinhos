#include <stdio.h>
#include <string.h>
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *amortecedor, int comprimento) {
    fgets(amortecedor, comprimento, stdin);
    strtok(amortecedor, "\n");
}
int main() {
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);
    idadeMedia = (double)(idade1 + idade2) / 2;
    printf("A idade media de %s e %s eh de %.2f anos\n", nome1, nome2, idadeMedia);
    return 0;
}