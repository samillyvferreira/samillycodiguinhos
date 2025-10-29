#include <iostream>
using namespace std;
    int main () {
    int vector[15]
    int maior, menor; 
    for (int i=0; i< 15; i++) {
        cout << "Digite  " << i+1 << "o numero: ";
        cin >> vector[i];
    }
    if (i==0) {
        maior = vector[i];
        menor = vector[i];
    } else {
        if (vector[i] > maior) {
            maior = vector[i];
        }
        if (vector[i] < menor) {
            menor = vector[i];
        }
    }
}
    cout << "O maior numero e: " << maior << endl;
    cout << "O menor numero e: " << menor << endl;
    return 0;
}    