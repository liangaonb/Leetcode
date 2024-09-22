/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int nums1, nums2;
        for(const string& token : tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                nums1 = stack.top();
                stack.pop();
                nums2 = stack.top();
                stack.pop();
                if(token=="+")
                    stack.push(nums2 + nums1);
                if(token=="-"){
                    stack.push(nums2 - nums1);
                }
                if(token=="*"){
                    stack.push(nums2 * nums1);
                }
                if(token=="/"){
                    stack.push(nums2 / nums1);
                }
            }
            else{
                stack.push(stoi(token));
            }
        }
        return stack.top();
    }
};
// @lc code=end

