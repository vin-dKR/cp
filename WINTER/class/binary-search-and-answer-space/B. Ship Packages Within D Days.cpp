
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

bool possible(const vector<int>& arr,ll weight, ll days) {
    ll reqDays = 1;

    int currW = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (currW + arr[i] <= weight) {
            currW += arr[i];
        } else {
            reqDays++;
            currW = arr[i];
        }
    }

    return reqDays <= days;
}

int main() {
    ll N, givenDays;
    cin >> N >> givenDays;

    vector<int> arr(N);

    int left = 0;
    int right = 0;
    int ans = 0;
     
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        left = max(left, (ll)arr[i]);
        right += arr[i];
    }


    while (left <= right) {
        ll mid = (left + right) / 2;
        if (possible(arr, mid, givenDays)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

}
