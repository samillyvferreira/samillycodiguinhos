#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int minutos;
    cout << "Digite a quantidade de minutos: ";
    if (!(cin >> minutos)) {
        cout << "Entrada invalida!" << endl;
        return 0;
    }
    double total = 50.0;
    if (minutos > 100) {
        total += (minutos - 100) * 2.0;
    }  
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;
    return 0;
}