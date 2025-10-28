#include <iostream>
using namespace std;

int main() { 
    double glicose;

    cout << "Digite o valor da glicose: ";
    cin >> glicose;

    cout << "Classificação: ";
    if (glicose < 100) {
        cout << "Normal" << endl;
    } else if (glicose >= 100 && glicose <= 140) {
        cout << "Elevado" << endl;
    } else {
        cout << "Diabetes" << endl;
    }
    return 0; 
}