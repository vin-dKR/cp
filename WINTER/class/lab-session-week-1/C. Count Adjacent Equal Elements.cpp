#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int contributionArr[N - 1];
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] == arr[i + 1])
            contributionArr[i] = 1;
        else
            contributionArr[i] = 0;
    }


    long long preSumArr[N - 1];
    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        if (contributionArr[i] == 1) {
                sum += contributionArr[i];
                preSumArr[i] = sum;
        } else {
            preSumArr[i] = sum;
        }
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        int width = R - L;
        if (L > 1) {
            cout << (preSumArr[R - 2] - preSumArr[L - 2]) << endl;
        } else if (L == 1) {
            cout << (preSumArr[R - 2]) << endl;
        } else {
            cout << 0 << endl;
        }
    } 
}
