/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原 IP 地址
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    vector<string> path;

    void backtracking(const string& s, int startIndex){
        if(path.size()==4 && startIndex==s.size()){
            res.push_back(join(path));
            return;
        }
        for (int len = 1; len <= 3; ++len){
            if(startIndex + len > s.size()) break;
            string segment = s.substr(startIndex, len);
            if(isValid(segment)){
                path.push_back(segment);
                backtracking(s, startIndex + len);
                path.pop_back();
            }
        }
    }

    bool isValid(const string& s){
        if(s[0]=='0' && s.size()>1)
            return false;
        int num = stoi(s);
        return num >= 0 && num <= 255;
    }

    string join(const vector<string>& svec){
        return svec[0] + "." + svec[1] + "." + svec[2] + "." + svec[3];
    }

    vector<string> restoreIpAddresses(string s) {
        backtracking(s, 0);
        return res;
    }
};
// @lc code=end

