#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(const vector<long long>& arr, int index, int q) {
    if (index == arr.size()) return -1;

    if (arr[index] == q) return index + 1;

    return firstOccurance(arr, index + 1, q);
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

    cout << firstOccurance(arr, 0, Q);
}

