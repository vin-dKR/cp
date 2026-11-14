
#include <iostream>
#include <vector>
using namespace std;

#define int long long

signed main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> num(N);

    int contriSize = (N * (N + 1)) / 2;

    vector<int> contri;
    vector<int> prefSum(contriSize);

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            contri.push_back(num[j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < contriSize; i++) {
        sum += contri[i];
        prefSum[i] = sum;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;

        cout << prefSum[R - 1] - (L > 1 ? prefSum[L - 2] : 0) << '\n';
    }

}


