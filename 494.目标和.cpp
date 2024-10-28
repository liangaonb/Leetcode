/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] 目标和
 */

// @lc code=start
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if((sum+target)%2!=0 || abs(target)>sum)
            return 0;
        int sum1 = (sum + target) / 2;
        vector<int> dp(sum1 + 1, 0);
        dp[0] = 1;
        for(int num : nums){
            for (int i = sum1; i >= num; --i){
                dp[i] = dp[i] + dp[i - num];
            }
        }
        return dp[sum1];
    }
};
// @lc code=end

