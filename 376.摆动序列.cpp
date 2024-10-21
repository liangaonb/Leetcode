/*
 * @lc app=leetcode.cn id=376 lang=cpp
 *
 * [376] 摆动序列
 */

// @lc code=start
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        int up = 1;
        int down = 1;
        for (int i = 1; i < nums.size(); ++i){
            if(nums[i]>nums[i-1]){
                up = down + 1;
            }
            if(nums[i]<nums[i-1]){
                down = up + 1;
            }
        }
        return max(up, down);
    }
};
// @lc code=end

