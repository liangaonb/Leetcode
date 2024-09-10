/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set;
        unordered_set<int> nums1_set(nums1.begin(), nums1.end());
        for (auto it = nums2.begin(); it != nums2.end();it++){
            if(nums1_set.find(*it) != nums1_set.end()){
                result_set.insert(*it);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};
// @lc code=end

