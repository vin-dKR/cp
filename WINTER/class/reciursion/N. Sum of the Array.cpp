
#include <iostream>
#include <vector>
using namespace std;

long long sumOfArr(const vector<long long>& arr, int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumOfArr(arr, n - 1);
}

int main() {
    int N;
    cin >> N;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << sumOfArr(arr, N) << "\n";
    return 0;
}

