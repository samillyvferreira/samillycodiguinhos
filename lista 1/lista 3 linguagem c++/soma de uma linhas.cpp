#include <iostream>
using namespace std;

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for (int j = 0; j < 5; j++) {
        soma += matriz[linha][j];
    }
    return soma;
}

int main() {
    int matriz[5][5];
    cout << "Digite os elementos da matriz 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    int linha;
    cout << "\nDigite o número da linha (0 a 4): ";
    cin >> linha;
    if (linha < 0 || linha >= 5) {
        cout << "Linha inválida!" << endl;
    } else {
        int resultado = somaLinha(matriz, linha);
        cout << "A soma dos elementos da linha " << linha << " é: " << resultado << endl;
    }

    return 0;