#include <iostream>
#include <map>

using namespace std;

int main () {
    int N;
    cin >> N;

    map<int, int> m = {};

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        m[num]++;
    }

    cout << m.size();
}
