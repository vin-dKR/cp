#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(const vector<long long>& arr, int n) {
    if (n <= 1) return true;
    if (arr[n - 2] > arr[n - 1]) return false;

    return checkSorted(arr, n - 1);
}

int main() {
    int N;
    cin >> N;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (checkSorted(arr, N))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}

