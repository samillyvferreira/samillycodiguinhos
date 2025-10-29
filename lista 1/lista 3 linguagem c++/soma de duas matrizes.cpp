#include <iostream>
using namespace std;

// Função que soma duas matrizes 3x3
void somarMatrizes(int A[3][3], int B[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizSoma[3][3];

    cout << "Digite os elementos da matriz A (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "\nDigite os elementos da matriz B (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    somarMatrizes(matrizA, matrizB, matrizSoma);

    cout << "\nMatriz resultante da soma:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}