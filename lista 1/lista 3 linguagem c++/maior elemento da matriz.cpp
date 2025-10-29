#include <iostream>
using namespace std;
 
    int main () { 
    const int LINHAS = 4;
    const int COLUNAS =4;
    int matriz[LINHAS][COLUNAS];

    cout << "Digite os elementos da matriz 4x4:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cin >> matriz[i][j];
        }
    }
    int maior = matriz[0][0];
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    cout << "O maior elemento da matriz é: " << maior << endl;
    return 0;
}
