#include <iostream>
using namespace std;

   int main() { 
   int vector [10];
   int soma = 0;
    for (int i = 0; i < 10; i++) {
         cout << "Digite o " << i+1 << "o numero: ";
         cin >> vector[i];
         soma += vector[i];
    }
    cout << "A soma dos valores do vetor e: " << soma << endl;
    return 0;  
}
