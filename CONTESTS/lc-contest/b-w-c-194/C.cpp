class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    string s1 = s.substr(i, j);
                    string s2 = s.substr(j + 1, k);

                    cout << s1 << " " << s2 << "\n";
                }
            }
        }
    }
};
