/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
    class MyCompare{
    public:
        bool operator()(const pair<int, int>& lp, const pair<int, int>& rp){
            return lp.second > rp.second;
        }
    };

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res(k);
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, MyCompare> pq;
        for (auto it = umap.begin(); it != umap.end(); it++){
            pq.push(*it);
            if(pq.size()>k){
                pq.pop();
            }
        }
        for (int i = 0; i < k; i++){
            res[i] = pq.top().first;
            pq.pop();
        }
        return res;
    }
};
// @lc code=end

