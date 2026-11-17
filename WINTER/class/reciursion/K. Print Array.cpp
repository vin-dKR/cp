
#include <iostream>
#include <vector>
using namespace std;

void printRevArr(const vector<int>& arr, int n) {
    if (n == 0) return;

    printRevArr(arr, n - 1);
    cout << arr[n - 1] << " ";
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    printRevArr(arr, N);
    return 0;
}

