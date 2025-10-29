#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;
    if (n < 0) {
        cout << "Fatorial nao definido para numeros negativos" << endl;
        return 0;
    }
    unsigned long long f = 1;
    for (long long i = 2; i <= n; ++i) f *= i;
    cout << f << endl;
    return 0;
}
