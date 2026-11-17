#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(const vector<long long>& arr, int len, int q) {
    if (len == 0) return -1;

    if (arr[len - 1] == q) return len;

    return firstOccurance(arr, len - 1, q);
}

int main() {
    int N;
    cin >> N;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int Q;
    cin >> Q;

    cout << firstOccurance(arr, N, Q);
}

