#include <stdio.h>
int main()
{ 
    int i, soma, vetor[10];
    soma = 0;
    for (i = 0; i < 10; i++) 
    {
        printf("Digite um numero:"); 
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("A soma obtida foi: \n");
    printf("%d\n", soma);   

    return 0;
}