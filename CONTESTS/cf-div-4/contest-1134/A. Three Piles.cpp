#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (b == a + 1 && c == b + 1)
            cout << "YES\n";
        else
            cout<< "NO\n";
    }
}
