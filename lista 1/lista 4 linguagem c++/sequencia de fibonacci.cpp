#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        if (i == 0) cout << a;
        else {
            cout << " " << b;
            unsigned long long c = a + b;
            a = b;
            b = c;
        }
    }
    cout << endl;
    return 0