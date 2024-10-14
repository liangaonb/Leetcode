/*
 * @lc app=leetcode.cn id=654 lang=cpp
 *
 * [654] 最大二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode *node = new TreeNode();
        if(nums.size()==1){
            node->val = nums[0];
            return node;
        }
        int maxVal = 0;
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i]>maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
        }
        node->val = maxVal;
        if(maxIndex>0){
            vector<int> left(nums.begin(), nums.begin() + maxIndex);
            node->left = constructMaximumBinaryTree(left);
        }
        if(maxIndex<nums.size()-1){
            vector<int> right(nums.begin() + maxIndex + 1, nums.end());
            node->right = constructMaximumBinaryTree(right);
        }
        
        return node;
    }
};
// @lc code=end

