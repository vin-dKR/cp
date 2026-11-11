#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    map<int, int> m = {};
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        m.insert({num, i + 1});
    }

    while (Q--) {
        int q;
        cin >> q;

        if (m.contains(q)) {
            cout << m[q] << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
