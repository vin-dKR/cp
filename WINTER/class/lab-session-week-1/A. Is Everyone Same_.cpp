#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int distributionArr[N-1];
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] == arr[i+1]) {
            distributionArr[i] = 1;
        } else {
            distributionArr[i] = 0;
        }
    }

    int sum = 0;
    int prefixSumArr[N - 1];
    for (int i = 0; i < N - 1; i++) {
        sum += distributionArr[i];
        prefixSumArr[i] = sum;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        if (L == R) {
            cout << "YES\n";
            continue;
        }

        int width = R - L;

        if (L > 1) {
            if (width == prefixSumArr[R - 1] - prefixSumArr[L - 2]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (width == prefixSumArr[R - 2]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
