#include <stdio.h>
#include <math.h>
int main(){

double base, altura, area, perimetro, diagonal;
printf("Base do retângulo: ");
scanf("%lf",&base);
printf("Altura do retângulo: ");
scanf("%lf", &altura);
area = base * altura;
printf("ÁREA = %.41f\n", area);
perimetro = 2 * (base + altura);
printf("PERÍMETRO = %.2f\n", perimetro);
diagonal = sqrt(base * base + altura * altura);
printf("DIAGONAL = %.2f\n", diagonal);
return 0;
}