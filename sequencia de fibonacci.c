#include <stdio.h>
int main () 
{
    int n, i; 
    int a = 0, b= 1, proximo;
    printf("Digite a quantidade de elementos:\n");
    scanf ("%d", &n);
    printf("Sequencia de Fibonacci:\n");
    for (i=0; i<n; i++)
    {
        printf ("%d\n", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    return 0;
}