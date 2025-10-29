#include <iostream>
using namespace std;
    
    int main () {
    int vetor[8];
    float soma = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "º valor: ";
        cin >> vetor[i];
        soma += vetor[i];
    } 
    float media = soma / 8;
    cout << "A média dos valores é: " << media << endl;
    return 0;
}
