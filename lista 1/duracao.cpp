#include <iostream>
using namespace std;

int main() {
    int totalSegundos, horas, minutos, segundos;
    cout << "Digite a duracao em segundos: ";
    cin >> totalSegundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}