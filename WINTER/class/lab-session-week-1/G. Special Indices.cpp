#include <iostream>
using namespace std;

#define int long long

signed main() {
    int N;
    cin >> N;

    int arr[N];
    int evenSumArr[N + 1];
    int oddSumArr[N + 1];

    evenSumArr[0] = 0;
    oddSumArr[0] = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];

        evenSumArr[i + 1] = evenSumArr[i];
        oddSumArr[i + 1] = oddSumArr[i];

        if (i % 2 == 0) {
            evenSumArr[i + 1] += arr[i];
        } else {
            oddSumArr[i + 1] += arr[i];
        }
    }

    // cout << "-------------\n";
    // for (int i = 0; i < N + 1; i++) {
    //     cout << evenSumArr[i] << " ";
    // }
    // cout << "-------------\n";
    // for (int i = 0; i < N + 1; i++) {
    //     cout << oddSumArr[i] << " ";
    // }
    // cout << "-------------\n";

    int totalEven = evenSumArr[N];
    int totalOdd = oddSumArr[N];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int leftEvenSum = evenSumArr[i];
        int leftOddSum = oddSumArr[i];

        int rightEvenSum = totalEven - evenSumArr[i + 1];
        int rightOddSum = totalOdd - oddSumArr[i + 1];

        int newEven = leftEvenSum + rightOddSum;
        int newOdd = leftOddSum + rightEvenSum;

        if (newEven == newOdd)
            ans++;
    }

    cout << ans << endl;
}
