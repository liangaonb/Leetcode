/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int curSum = nums[0];
        for (int i = 1; i < nums.size(); ++i){
            curSum = max(curSum + nums[i], nums[i]);
            result = max(result, curSum);
        }
        return result;
    }
};
// @lc code=end

