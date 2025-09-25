#include <stdio.h>
int main () {
double larg, comp, area, valorm2,preco;
printf("Digite o valor do comprrimento ");
scanf("%lf", &comp);
printf("Digite o valor da largura ");
scanf("%lf", &larg);
area = comp * larg;
printf("Digite o valor do metro quadrado ");
scanf("%lf", &valorm2);
preco = area * valorm2;
printf("O preco do terreno e: %.2lf\n", preco);
printf("A area   do terreno e: %.2lf\n", area);
return 0;
}
 
