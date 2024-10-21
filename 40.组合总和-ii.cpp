/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtracking(vector<int>& candidates, int count, int start){
        if(count < 0 )
            return;
        if(count == 0){
            res.push_back(path);
            return;
        }
        for (int i = start; i < candidates.size(); i++){
            if(i>start && candidates[i]==candidates[i-1])
                continue;
            
            count -= candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates, count, i + 1);
            count += candidates[i];
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0);
        return res;
    }
};
// @lc code=end

