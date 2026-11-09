#include <iostream>
using namespace std;

#define int long long
signed main() {
    int N, Q;
    cin >> N >> Q;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int contributionArr[N - 1];
    for (int i = 0; i < N - 1; i ++) {
        if (arr[i + 1] >= arr[i]) {
            contributionArr[i] = 1;
        } else {
            contributionArr[i] = 0;
        }
    }

    int sum = 0;
    int prefixsumArr[N - 1];
    for (int i = 0; i < N - 1; i++) {
        sum += contributionArr[i];
        prefixsumArr[i] = sum;
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
            int sum = prefixsumArr[R - 2] - prefixsumArr[L - 2];
            if (width == sum) {
                cout << "YES\n";
            } else if (width > sum) {
                cout << "NO\n";
            }
        } else {
            int sum = prefixsumArr[R - 2];
            // cout << "-----------------\n";
            // cout << "left = " << L << "and right = " << R << endl;
            // cout << "width = " <<width << endl;
            // cout << "sum = " << sum << endl;
            // cout << "-----------------\n";
            if (width == sum) {
                cout << "YES\n";
            } else if (width > sum) {
                cout << "NO\n";
            }
        }

    }
}
