#include <iostream>
using namespace std;

int main() {
    const int TAM = 2;
    int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
    cout << "Digite os elementos da matriz A (2x2):\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    cout << "\nDigite os elementos da matriz B (2x2):\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAM; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nMatriz resultado C (A x B):\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}