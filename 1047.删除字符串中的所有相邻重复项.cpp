/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        stack.push(s[0]);
        for (int i = 1; i < s.size(); i++){
            if(stack.empty()){
                stack.push(s[i]);
            }else{
                if(stack.top()==s[i]){
                    stack.pop();
                    continue;
                }else{
                    stack.push(s[i]);
                }
            }
            
        }
        string res;
        res.resize(stack.size());
        for (int i = stack.size()-1; i >= 0; i--){
            res[i] = stack.top();
            stack.pop();
        }
        return res;
    }
};
// @lc code=end

