#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);

    for (int i = 0; i< N; i++) {
        arr[i] = i + 1;
    }

    while(Q--) {
        int q;
        cin >> q;

        vector<int> dummy(q);
        for (int i = 0; i < q; i++) {
            dummy[i] = -arr[i];
        }

        for (int i = 0; i < q; i++) {
            arr[i] = dummy[q - i - 1];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\n";
    }

}

