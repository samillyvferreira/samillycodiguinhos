#include <stdio.h>
#include <math.h>

int main() {
double r, area;
const double PI = 3.14159;
printf("Digite o valor do raio: ");
scanf("%lf", &r);
area = PI * r * r;
printf("AREA = %.3f\n", area);
return 0;
}