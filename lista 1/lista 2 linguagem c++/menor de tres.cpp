#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    int menor = min(a, min(b, c));
    cout << menor << endl;
    return 0;
}