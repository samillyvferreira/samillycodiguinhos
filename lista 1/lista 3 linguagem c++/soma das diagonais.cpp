#include <iostream>
using namespace std;

int main() {
    const int TAM = 3;
    int matriz[TAM][TAM];
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < TAM; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][TAM - 1 - i];
    }

    cout << "\nSoma da diagonal principal: " << somaPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;

    return 0;
}