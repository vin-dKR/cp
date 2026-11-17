#include <iostream>
using namespace std;

int main() {
    int N, Q, K;
    cin >> N >> Q >> K;

    long long arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int preDigitSumArray[N];

    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int sum = 0;

        while(num != 0) {
            int remainder = num % 10;
            sum += remainder;

            num = num / 10;
        }

        preDigitSumArray[i] = (sum == K) ? 1 : 0;
    }

    for (int i = 1; i < N; i++) {
        preDigitSumArray[i] += preDigitSumArray[i - 1];
    }

    // cout << "-----------\n";
    // for (int i = 0; i < N; i++) {
    //     cout << preDigitSumArray[i] << " ";
    // }
    // cout << "\n-----------\n";

    while (Q--) {
        int L, R;
        cin >> L >> R;

        if (L == 1) {
            cout << preDigitSumArray[R - 1] << endl;
        } else {
            cout << (preDigitSumArray[R - 1] - preDigitSumArray[L - 2]) << endl;
        }
    }
}
