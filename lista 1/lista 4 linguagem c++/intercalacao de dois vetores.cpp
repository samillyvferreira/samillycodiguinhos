#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], v3[10];
    
    for(int i = 0; i < 5; i++) {
        cin >> v1[i];
    }
    
    for(int i = 0; i < 5; i++) {
        cin >> v2[i];
    }
    
    for(int i = 0; i < 5; i++) {
        v3[i*2] = v1[i];
        v3[i*2+1] = v2[i];
    }
    
    for(int i = 0; i < 10; i++) {
        if(i > 0) cout << " ";
        cout << v3[i];
    }
    cout << endl;
    
    return 0;
}