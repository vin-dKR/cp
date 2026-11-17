#include <iostream>
#include <vector>
using namespace std;

void printAllOccurance(const vector<long long>& arr, int len, int q, bool found = false) {
    if (len == 0) {
        if (!found) cout << -1;
        return; 
    }

    bool matched = (arr[len - 1] == q);

    printAllOccurance(arr, len - 1, q, found || matched);

    if (matched) {
        cout << len << " ";
    }
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

    printAllOccurance(arr, N, Q);
}

