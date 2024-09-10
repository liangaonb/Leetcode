/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int getSum(int n){
        int sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> record;
        while(1){
            int result = getSum(n);
            if(result == 1)
                return true;
            if(record.find(result) != record.end())
                return false;
            record.insert(result);
            
            n = result;
        }
    }
};
// @lc code=end

