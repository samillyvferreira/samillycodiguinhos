#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int codigo, quantidade;
    if (!(cin >> codigo >> quantidade)) return 0;

    vector<double> preco = {0.0, 5.00, 3.50, 4.80, 8.90, 7.32}; 
    double total = 0.0;
    if (codigo >= 1 && codigo <= 5) total = preco[codigo] * quantidade;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
    return 0;
}