/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void backtracking(int count, int k, int index){
        if(path.size()==k && count==0){
            res.push_back(path);
            return;
        }
        for (int i = index; i <= 9; ++i){
            if(count-i < 0)
                break;
            path.push_back(i);
            backtracking(count-i, k, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(n ,k, 1);
        return res;
    }
};
// @lc code=end

