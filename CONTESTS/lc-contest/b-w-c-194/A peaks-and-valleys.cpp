class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int l = nums.size();
        int vs = 0;
        int ps = 0;

        for (int i = 1; i < l - 2; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                ps += nums[i];
            } 

            if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                vs += nums[i];
            } 
        }

        return ps - vs;
    }
};
