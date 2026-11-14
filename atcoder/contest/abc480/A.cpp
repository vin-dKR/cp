#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<char>> sq(2, vector<char>(2));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> sq[i][j];
        }
    }

    if (sq[0][0] + sq[0][1] == ('A' + 'D') 
        || sq[0][1] + sq[1][1] == ('A' + 'D') 
        || sq[1][0] + sq[1][1] == ('A' + 'D') 
        || sq[0][0] + sq[1][0] == ('A' + 'D')
    ) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
