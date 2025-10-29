#include <iostream>
using namespace std;
    int main() {
    int vetor[20];
    int pares = 0, impares = 0;
 for (int i = 0; i < 20; ++i) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vetor[i];
        if (vetor[i] % 2 == 0) ++pares;
        else ++impares;
    }
    
    cout << "\nQuantidade de pares: " << pares << endl;
    cout << "Quantidade de impares: " << impares << endl;
    return 0;
}
