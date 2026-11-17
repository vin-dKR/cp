#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, K, T;
    cin >> N >> K >> T;

    vector<int> timestamp(N);

    for (int i = 0; i < N; i++) {
        cin >> timestamp[i];
    }
    
    int totalPress = 0;
    totalPress += (timestamp[0] + K - 1) / 4;

    for (int i = 1; i < N && timestamp[i] < T; i++) {
        int gap = timestamp[i] - timestamp[i - 1];
        totalPress += (gap - 1) / K;
    }

    int lastGap = T - timestamp[N - 1];
    totalPress += (lastGap - 1) / K;

    cout << totalPress;
}

