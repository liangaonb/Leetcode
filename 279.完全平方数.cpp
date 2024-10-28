/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, n + 1);
        dp[0] = 0;
        vector<int> nums(101, 0);
        for (int i = 0; i < 101; ++i){
            nums[i] = i;
            nums[i] *= nums[i];
        }
        for (int i = 1; i < nums.size(); ++i){
            for (int j = nums[i]; j <= n; ++j){
                dp[j] = min(dp[j], dp[j - nums[i]] + 1);
            }
        }
        return dp[n];
    }
};
// @lc code=end

