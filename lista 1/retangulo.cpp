#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, altura, area, perimetro, diagonal;
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);
    cout.precision(4);
    cout << fixed;
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;
    return 0;
}