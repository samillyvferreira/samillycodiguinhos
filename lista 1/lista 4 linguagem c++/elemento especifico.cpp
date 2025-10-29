#include <iostream>
using namespace std;

int main() {
int vetor[10];
for (int i = 0; i < 10; ++i) {
cin >> vetor[i];
}
int alvo;
cin >> alvo;
bool encontrado = false;
for (int i = 0; i < 10; ++i) {
if (vetor[i] == alvo) {
encontrado = true;
break;
}
}
if (encontrado) cout << "Numero presente no vetor" << endl;
else cout << "Numero nao encontrado no vetor" << endl;
return 0;
}