#include <iostream>
using namespace std;

int main() {
int v[10], r[10];
for (int i = 0; i < 10; ++i) cin >> v[i];
for (int i = 0; i < 10; ++i) r[i] = v[9 - i];
for (int i = 0; i < 10; ++i) {
if (i) cout << " ";
cout << r[i];
}
cout << endl;
return 0;
}