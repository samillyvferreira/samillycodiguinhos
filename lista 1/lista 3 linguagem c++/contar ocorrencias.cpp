#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4];
    int numero;

    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nDigite o número que deseja buscar: ";
    cin >> numero;

    int ocorrencias = contarOcorrencias(matriz, numero);
    cout << "O número " << numero << " aparece " << ocorrencias << " vezes na matriz.\n";

    return 0;