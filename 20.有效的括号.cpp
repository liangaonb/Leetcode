/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stack.push(s[i]);
            }else if(s[i]==')'){
                if(!stack.empty() && stack.top()=='('){
                    stack.pop();
                }else{
                    return false;
                }
            }else if(s[i]=='}'){
                if(!stack.empty() && stack.top()=='{'){
                    stack.pop();
                }else{
                    return false;
                }
            }else if(s[i]==']'){
                if(!stack.empty() && stack.top()=='['){
                    stack.pop();
                }else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
// @lc code=end

