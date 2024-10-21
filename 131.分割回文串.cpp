/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> res;
    vector<string> path;

    bool check(const string& s, int left, int right){
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }

    void backtracking(const string& s, int startIndex){
        if(startIndex==s.size()){
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i < s.size(); ++i){
            if(check(s, startIndex, i)){
                path.push_back(s.substr(startIndex, i - startIndex + 1));
                backtracking(s, i + 1);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        backtracking(s, 0);
        return res;
    }
};
// @lc code=end

