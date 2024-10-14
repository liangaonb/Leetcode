/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool traversal(TreeNode* root, int count){
        count -= root->val;
        if(!root->left && !root->right && count==0)
            return true;
        if(!root->left && !root->right)
            return false;
        if(root->left){
            if(traversal(root->left, count))
                return true;
            //count += root->left->val;
        }
        if(root->right){
            if(traversal(root->right, count))
                return true;
            //count += root->right->val;
        }
        return false;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
            return false;
        return traversal(root, targetSum);
    }
};
// @lc code=end

