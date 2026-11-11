#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> m = {};

    while (N--) {
        int q;
        cin >> q;

        if (q == 1) {
            int val;
            cin >> val;

            m[val]++;
        } else if (q == 2) {
            int val;
            cin >> val;

            m.erase(val);
        } else if (q == 3) {
            cout << m.size() << endl;
        } else {
            int val;
            cin >> val;

            if (m.contains(val)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
