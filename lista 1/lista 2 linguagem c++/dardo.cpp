#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double distancia1, distancia2, distancia3, maior;
    
    cout << "Digite as tres distancias:\n";
    cin >> distancia1;
    cin >> distancia2;
    cin >> distancia3;
    
    maior = max(distancia1, max(distancia2, distancia3));
    
    cout << "MAIOR DISTANCIA = " << maior << endl;
    
    return 0;
}