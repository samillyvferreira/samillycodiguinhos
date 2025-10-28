#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double preco, dinheiro, total, troco, faltante; 
    int quantidade;

    cout << "Preco do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    total = preco * quantidade;

    if (dinheiro >= total) {
        troco = dinheiro - total;
        cout << fixed << setprecision(2);
        cout << "Troco: R$ " << troco << endl;
    } 
    else {
        faltante = total - dinheiro;
        cout << fixed << setprecision(2);
        cout << "Dinheiro insuficiente falta: R$ " << faltante << endl;
    }
    return 0;
}