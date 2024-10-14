/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtrack(vector<int>& candidates, int count, int index){
        if(count < 0)
            return;
        if(count == 0){
            res.push_back(path);
            return;
        }
        for (int i = index; i < candidates.size(); i++){
            count -= candidates[i];
            path.push_back(candidates[i]);
            backtrack(candidates, count, i);
            count += candidates[i];
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates, target, 0);
        return res;
    }
};
// @lc code=end

