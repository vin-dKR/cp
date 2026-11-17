#include <iostream>
using namespace std;

void tow(int n, char a, char b, char c) {
    if (n == 0) return;
    
    tow(n - 1, a, c, b);
    cout << "Move " << a << " to " << c << "\n";
    tow(n - 1, b, a, c);
}

int main() {
    int N;
    cin >> N;
    
    tow(N, 'A', 'B', 'C');
}
