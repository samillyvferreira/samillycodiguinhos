#include <stdio.h>

int main() {

double A, B, C;
double areaQuadrado, areaTriangulo, areaTrapezio;
printf("Digite as tres medidas:\n");
scanf("%lf %lf %lf", &A, &B, &C);
areaQuadrado = A * A;
areaTriangulo = (A * B) / 2.0;
areaTrapezio = ((A + B) * C) / 2.0;
printf("QUADRADO = %.4f\n", areaQuadrado);
printf("TRIANGULO = %.4f\n", areaTriangulo);
printf("TRAPEZIO = %.4f\n", areaTrapezio);
return 0;
}





