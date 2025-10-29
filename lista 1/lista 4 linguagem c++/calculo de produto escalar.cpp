#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5];
    int produto_escalar = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> v1[i];
    }
    
    for(int i = 0; i < 5; i++) {
        cin >> v2[i];
    }
    
    for(int i = 0; i < 5; i++) {
        produto_escalar += v1[i] * v2[i];
    }
    
    cout << produto_escalar << endl;
    
    return 0;
}