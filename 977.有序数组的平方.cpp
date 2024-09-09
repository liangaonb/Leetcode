/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto it = nums.begin(); it != nums.end(); it++){
            *it = (*it) * (*it);
        }
        for (int i = 0; i < nums.size(); i++){
            int min = nums[i];
            int min_index = i;
            for (int j = i+1; j < nums.size(); j++){
                if(nums[j] < min){
                    min = nums[j];
                    min_index = j;
                }
            }
            swap(nums[i], nums[min_index]);
        }
        return nums;
    }
};
// @lc code=end

