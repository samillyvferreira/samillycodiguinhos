#include <stdio.h>
int main() 
{ 
   int media, i, soma, vetor[8];
   soma =0;
    for(i=0; i<8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma/8;
    printf("A media obtida foi:\n");
    printf("%d\n", media);
return 0;
}
