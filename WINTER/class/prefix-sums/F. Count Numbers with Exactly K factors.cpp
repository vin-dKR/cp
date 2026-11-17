#include <iostream>
using namespace std;

int getFactorsTotal(int n) {
    int total = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            total++;

            if (i != n / i) {
                total++;
            }
        }
    }

    return total;
}

int main() {
    int N, Q, R;
    cin >> N >> Q >> R;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int preSum[N];
    for (int i = 0; i < N; i++) {
        // cout << getFactorsTotal(arr[i]) << " -";
        if (getFactorsTotal(arr[i]) == R)
            preSum[i] = 1;
        else
            preSum[i] = 0;
    }

    for (int i = 1; i < N; i++) {
        preSum[i] += preSum[i - 1];
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        if (L == 1) {
            cout << preSum[R - 1] << "\n";
        } else {
            cout << (preSum[R - 1] - preSum[L - 2]) << "\n";
        }
    }
}
