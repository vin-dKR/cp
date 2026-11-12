#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin>> N >> M;

    vector<int> candidates(N);
    for (int i = 0; i < N; i++) {
        candidates[i] = i + 1;
    }

    vector<int> firstChoise(M);
    vector<int> secondChoise(M);

    for (int i = 0; i < M; i++) {
        int p1, p2;
        cin >> p1 >> p2;

        firstChoise[i] = p1;
        secondChoise[i] = p2;
    }

    for (int i = 0; i < N; i++) {
        int eleminated = candidates[i];
        map<int, int> m = {};

        for (int j = 0; j < M; j++) {
            int p1 = firstChoise[j];
            int p2 = secondChoise[j];

            if (p1 == eleminated) {
                m[p2]++;
            } else if (p2 == eleminated) {
                m[p1]++;
            } else {
                m[p1]++;
            }

            int winner_key = -1;
            int max_votes = -1;

            for (auto pair : m) {
                int candidate_id = pair.first; 
                int votes = pair.second;

                if (votes > max_votes) {
                    max_votes = votes;
                    winner_key = candidate_id;
                }
            }

            cout << winner_key << "\n";
        }
    }
}


