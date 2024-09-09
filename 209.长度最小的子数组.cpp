/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = __INT32_MAX__;
        int sublength = 0;
        int i = 0;
        int sum = 0;
        for (int j = 0; j < nums.size(); j++){
            sum += nums[j];
            sublength++;
            while(sum >= target){
                sublength = j - i + 1;
                result = result < sublength ? result : sublength;
                sum -= nums[i++];
            }
        }
        return result == __INT32_MAX__ ? 0 : result;
    }
};
// @lc code=end

