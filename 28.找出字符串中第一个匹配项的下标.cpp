/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0, j=0;
        while(i < haystack.size()){
            if(haystack[i] == needle[j]){
                int index = i;
                while(haystack[i] == needle[j] && j < needle.size()){
                    i++;
                    j++;
                }
                if(j == needle.size())
                    return index;
                j = 0;
                i = index + 1;
            }
            else
                i++;
        }
        return -1;
    }
};
// @lc code=end

