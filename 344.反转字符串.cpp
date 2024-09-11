/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int size = s.size();
        for (int i = 0; i < size/2; i++){
            temp = s[i];
            s[i] = s[size - i-1];
            s[size - i-1] = temp;
        }
        
    }
};
// @lc code=end

