#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valorHora, horas, pagamento;
    cout << "Nome do funcionario: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;
    pagamento = valorHora * horas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;
    return 0;
}
    