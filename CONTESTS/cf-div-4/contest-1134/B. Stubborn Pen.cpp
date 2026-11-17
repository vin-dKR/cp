#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int N;
        cin >> N;

        string s;
        cin >> s;

        char init = 'R';
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (s[i] == init) {
                if (s[i] == 'R') {
                    init = 'B';
                } else {
                    init = 'R';
                }
            } else {
                count++;

                if (s[i] == 'R') {
                    init = 'B';
                } else {
                    init = 'R';
                }
            }
        }

        cout << count << endl;
    }
}
