#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    long long arr[N];
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        sum += num * num;
        arr[i] = sum;
    }

    // cout << "-----------\n";
    // for (int i = 0; i < N; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "-----------\n";

    while (Q--) {
        int L, R;
        cin >> L >> R;

        if (L == 1) {
            cout << arr[R - 1] << endl;
        } else {
            cout << (arr[R - 1] - arr[L - 2]) << endl;
        }
    }
}
