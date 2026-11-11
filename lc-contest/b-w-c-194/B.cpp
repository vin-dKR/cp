class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int total = 0;
        int adjecent = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= minK && nums[i] <= maxK) {
                adjecent++;
                total += adjecent;
            } else {
                adjecent = 0;
            }

        }

        return total;
        
    }
};
