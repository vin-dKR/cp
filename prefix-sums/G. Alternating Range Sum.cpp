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

    int contri[N];

    for (int i = 0; i < N; i++) {
        if (i % 2 != 0) {
            contri[i] = arr[i] * (-1);
        } else {
            contri[i] = arr[i];
        }
    }
    
    int pre[N + 1];
    int sum = 0;

    pre[0] = 0;
    for (int i = 0; i < N; i++) {
        sum += contri[i];
        pre[i + 1] = sum;
    }

    // cout << "--- \n";
    // for (int i = 0; i < N + 1; i++) {
    //     cout << pre[i] << "";
    // }
    // cout << "\n ----";

    while (Q--) {
        int L, R;
        cin >> L >> R;

        int ans = (pre[R] - pre[L - 1]);

        if (L % 2 == 0)
            ans = -ans;

        cout << ans << "\n";
    }

}
