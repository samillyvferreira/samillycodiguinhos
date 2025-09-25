#include <stdio.h>
 int main() {

    char escala;
    double temperatura, resultado;
    printf("Digite a escala de temperatura (C/F): ");
    scanf(" %c", &escala);
    printf("Digite o valor da temperatura: ");
    scanf("%lf", &temperatura);
    if (escala == 'C' || escala == 'c') {
        resultado = (temperatura * 9.0 / 5.0) + 32.0;
        printf("Temperatura em Fahrenheit: %.2lf\n", resultado);
    } else if (escala == 'F' || escala == 'f') {
        resultado = (temperatura - 32.0) * 5.0 / 9.0;
        printf("Temperatura em Celsius: %.2lf\n", resultado);
    } else {
        printf("Escala invalida!\n");
    }
    return 0;
}