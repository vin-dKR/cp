#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int N;
    cin >> N;
    
    if (N == 0) {
        cout << 1;
    } else {
        cout << fact(N);
    }
}
