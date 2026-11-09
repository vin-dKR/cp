#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long arr[N];
    long long sum = 0;
    long long prefixSumArr[N];
    for (long long  i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
        prefixSumArr[i] = sum;
    }

    // cout << "----------\n";
    // for (int i = 0; i < N; i++) {
    //     cout << prefixSumArr[i] << " ";
    // }
    // cout << "=-------\n";

    for (int i = 0; i < N; i++) {
        long long leftSum = prefixSumArr[i];

        long long rightSum = prefixSumArr[N - 1] - prefixSumArr[i];

        if (leftSum == rightSum) {
            cout  << "YES";
            return 0;
        }
    } 

    cout << "NO";
}
