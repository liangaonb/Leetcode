/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 *
 * [1005] K 次取反后最大化的数组和
 */

// @lc code=start
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; ++i){
            auto minIt = min_element(nums.begin(), nums.end());
            *minIt = -(*minIt);
        }
        for(int i : nums){
            sum += i;
        }
        return sum;
    }
};
// @lc code=end

