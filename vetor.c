#include <stdio.h>
int main() 
{
    int i,n; 
    printf("Qual a quantidade de termos da sequencia?: "); 
    scanf("%d", &n);
    int vetor[n]; 
    for(i=0;i<n;i++) 
    {
        printf("Digite um numero:"); 
        scanf("%d", &vetor[i]);
    }
    printf("A sequencia foi digitada foi: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", vetor[i]);
    }   
    return 0;
}