#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#define int long long

signed main() {
    int N, k;
    cin >> N >> k;

    vector<int> arr(N);
    for (int i = 0; i< N; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    int left = 0;
    int sum = 0;
    int ans = LLONG_MAX;

    for (int right = 0; right < N; right++) {
        sum += arr[right];

        while (sum > k) {
            ans = min(ans, right - left + 1);

            sum -= arr[left];
            left++;
        }
    }
    
    if (ans == LLONG_MAX)
        cout << -1 << "\n";
    else
        cout << ans << "\n"; 

}

