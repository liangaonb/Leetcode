/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for (auto it = s.begin(); it != s.end();it++){
            arr[*it - 'a']++;
        }
        for (auto it = t.begin(); it != t.end();it++){
            arr[*it - 'a']--;
        }
        for (int i = 0; i < 26;i++){
            if(arr[i]!=0)
                return false;
        }
        return true;
    }
};
// @lc code=end

