#include <stdio.h>
int main () {
    int vetor[10], inverso[10], i;
    printf("Digite 10 numeros:\n");
    for (i=0; i<10; i++) {
        scanf ("%d", &vetor[i]);
    } 
    for (i=0; i<10; i++) {
        inverso[i] = vetor[9-i];
    }
    printf("Vetor inverso:\n");
    for (i=0; i<10; i++) {
        printf ("%d\n", inverso[i]);
        printf("%d", inverso[i]);
    }
    printf ("\n");
    return 0;
}