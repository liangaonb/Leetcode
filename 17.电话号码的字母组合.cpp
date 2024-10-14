/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    const string phoneMap[10] = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz" // 9
    };
    vector<string> res;
    string path;

    void backtrack(const string& digits, int index){
        if(index==digits.size()){
            res.push_back(path);
            return;
        }
        int digit = digits[index] - '0';
        string letters = phoneMap[digit];
        for(char c : letters){
            path.push_back(c);
            backtrack(digits, index + 1);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return res;
        backtrack(digits, 0);
        return res;
    }
};
// @lc code=end

