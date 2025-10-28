#include <iostream>
using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;

    bool multiplos = false;
    if (a == 0 && b == 0) multiplos = true;
    else if (b != 0 && a % b == 0) multiplos = true;
    else if (a != 0 && b % a == 0) multiplos = true;

    if (multiplos) cout << "Sao multiplos" << endl;
    else cout << "Nao sao multiplos" << endl;

    return 0;
}