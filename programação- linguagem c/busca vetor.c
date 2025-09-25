#include <stdio.h>
int main()
{
    int i, busca, numero, vetor[10];
    busca = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
    }
    printf("Digite um numero para procurado:");
    scanf("%d", &numero);
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] == numero)
        {
            busca = busca + 1;
        }
    }
        if (busca == 0)
    {
        printf("O numero digitado nao esta na sequencia");
    }
    else
    {
        printf("O numero digitado esta na sequencia");
    }
    return 0;
}