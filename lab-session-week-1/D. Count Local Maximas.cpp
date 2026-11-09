#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int contributionArr[N - 2];
    for (int i = 0; i < N - 2; i++) {
        if (arr[i + 1] > arr[i] && arr[i + 1] > arr[i + 2]) {
            contributionArr[i] = 1;
        } else {
            contributionArr[i] = 0;
        }
    }


    int prefixSumArr[N - 2];
    int sum = 0;
    for (int i = 0; i < N - 2; i++) {
        sum += contributionArr[i];
        prefixSumArr[i] = sum;
    }
    // for (int i = 0; i < N - 2; i++) {
    //     cout << prefixSumArr[i] << " ";
    // }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        if ((R - L) < 2) {
            cout << 0 << endl;
            continue;
        } else if (L == 1) {
            cout << prefixSumArr[R - 3] << endl;
        } else {
            cout << (prefixSumArr[R - 3] - prefixSumArr[L - 2]) << endl;
        }
    }
}

