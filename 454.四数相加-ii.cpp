/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> map12;
        int count = 0;
        for(int a:nums1){
            for(int b:nums2){
                map12[a + b]++;
            }
        }
        for(int c:nums3){
            for(int d:nums4){
                if(map12.find(0-c-d)!=map12.end()){
                    count += map12[0 - c - d];
                }
            }
        }
        return count;
    }
};
// @lc code=end

