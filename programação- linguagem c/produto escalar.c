#include <stdio.h>
int main() { 
    int v1[5], v2[5], produto = 0, i;
    printf("Digite 5 elementos do primeiro vetor:\n");
    for(i = 0; i < 5; i++) scanf("%d", &v1[i]);
    printf("Digite 5 elementos do segundo vetor:\n");
    for(i = 0; i < 5; i++) scanf("%d", &v2[i]);
    for(i = 0; i < 5; i++) produto += v1[i] * v2[i];
    printf("Produto escalar: %d\n", produto);
    return 0;
}
