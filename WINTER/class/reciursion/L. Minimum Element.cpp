#include <iostream>
#include <vector>
using namespace std;

int printMin(const vector<int>& arr, int n) {
    if (n == 0) return arr[n];

    return min(arr[n - 1], printMin(arr, n - 1));
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << printMin(arr, N);
    return 0;
}

