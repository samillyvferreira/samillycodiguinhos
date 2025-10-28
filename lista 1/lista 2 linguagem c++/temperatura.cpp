#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temperatura, convertida;
    
    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;
    
    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temperatura;
        convertida = (temperatura - 32) * 5/9;  
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << convertida << endl;
    }
    else if (escala == 'C' || escala == 'c') {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temperatura;
        convertida = (temperatura * 9/5) + 32;  
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << convertida << endl;
    }
    else {
        cout << "Escala invalida!" << endl;
    }
    
    return 0;
}