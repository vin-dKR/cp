#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<long long> prefix(N + 1, 1);
    vector<long long> suffix(N + 1, 1);
    vector<long long> ans(N);

    for (int i = 0; i < N; i++) {
        prefix[i + 1] = prefix[i] * arr[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i];
    }

    for (int i = 0; i < N; i++) {
        ans[i] = prefix[i] * suffix[i + 1];
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
}
