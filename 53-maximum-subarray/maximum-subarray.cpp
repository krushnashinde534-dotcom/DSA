class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefix = 0;
        int minPrefix = 0;
        int maxSum = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            prefix += nums[i];

            maxSum = max(maxSum, prefix - minPrefix);

            minPrefix = min(minPrefix, prefix);
        }

        return maxSum;
    }
};