/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int steps = 0;
        int curEnd = 0;
        int nextEnd = 0;
        for (int i = 0; i < nums.size(); ++i){
            nextEnd = max(i + nums[i], nextEnd);
            if(i == curEnd){
                ++steps;
                curEnd = nextEnd;
                if(curEnd >= nums.size()-1) break;
            }
        }
        return steps;
    }
};
// @lc code=end

