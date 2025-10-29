#include <iostream>
using namespace std;

    int main() { 
    const int LINHAS = 3;
    const int COLUNAS = 4;
    int matriz[LINHAS][COLUNAS];
    
    cout << "Digite os elemnenos da matriz (" << LINHAS << "x" << COLUNAS << "):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz transposta:" << endl;
    for (int j = 0; j < COLUNAS; j++) {
        for (int i = 0; i < LINHAS; i++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}