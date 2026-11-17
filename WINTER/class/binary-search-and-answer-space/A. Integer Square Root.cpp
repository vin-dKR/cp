#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;

    ll left = 0;
    ll right = N;
    ll num = 0;

    while(left <= right) {
        ll mid = (left + right) / 2;

        if (mid == 0 || mid <= N / mid) {
            num = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
        
    cout << num;
}
