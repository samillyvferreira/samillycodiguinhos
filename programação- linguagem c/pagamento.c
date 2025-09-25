#include <stdio.h>

int main() {
char nome[50];
double valorHora, horasTrabalhadas, pagamento;
printf("Nome do funcionario: ");
fgets(nome, 50, stdin);
// Remove o '\n' do final, se existir
if (nome[strlen(nome) - 1] == '\n') {
nome[strlen(nome) - 1] = '\0';
}
printf("Valor por hora: ");
scanf("%lf", &valorHora);
printf("Horas trabalhadas: ");
scanf("%lf", &horasTrabalhadas);
pagamento = valorHora * horasTrabalhadas;
printf("O pagamento para %s deve ser %.2f\n", nome, pagamento);
return 0;
}