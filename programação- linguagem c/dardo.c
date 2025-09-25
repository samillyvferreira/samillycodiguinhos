#include <stdio.h> 
int main() {
    double tentativa1, tentativa2, tentativa3;
    printf("Digite o valor da primeira tentativa: ");
    scanf("%lf", &tentativa1);
    printf("Digite o valor da segunda tentativa: ");
    scanf("%lf", &tentativa2);
    printf("Digite o valor da terceira tentativa: ");
    scanf("%lf", &tentativa3);
    double maior = tentativa1;
    if (tentativa2 > maior) {
        maior = tentativa2;
    }
    if (tentativa3 > maior) {
        maior = tentativa3;
    }
    printf("A maior tentativa foi: %.2lf\n", maior);
    return 0;   
} 