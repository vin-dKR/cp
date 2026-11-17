#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// ===================== Implement this =====================
class Solution {
public:
    int longestStreak(vector<int>& a) {
        int s = a.size();
        unordered_map<int, int> lastseen;
        int streak = 0;
        int left = 0;

        for (int i = 0; i < s; i++) {
            if (lastseen.count(a[i])) {
                left = max(left, lastseen[a[i]] + 1);
            }

            lastseen[a[i]] = i;
            streak = max(streak, i - left + 1);
        }
        return streak;
    }
};
// ===================== I/O driver (do not modify) =====================
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    Solution sol;
    cout << sol.longestStreak(a) << "\n";
    return 0;
}
