/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0)
            return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int index = s.size() - 1;
        int res = 0;
        for (int i = g.size() - 1; i >= 0; i--){
            if(index >=0 && s[index] >= g[i]){
                index--;
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

