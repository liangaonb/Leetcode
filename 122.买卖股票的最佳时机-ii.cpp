/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0;
        for (int i = 0; i < size-1; ++i){
            if(prices[i+1]>prices[i]){
                profit += prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};
// @lc code=end

