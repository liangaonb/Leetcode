/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int left, right;
        for (int i = 0; i < nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            left = i + 1;
            right = nums.size() - 1;
            while(right > left){
                if(nums[i]+nums[left]+nums[right]>0)
                    right--;
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    
                    while(right>left && nums[right]==nums[right-1]){
                        right--;
                    }
                    
                    while(right>left && nums[left]==nums[left+1]){
                        left++;
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};
// @lc code=end

