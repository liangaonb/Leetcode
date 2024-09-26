/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int getDepth(TreeNode* root){
        if(root==nullptr)
            return 0;
        if(root->left && !root->right)
            return 1 + getDepth(root->left);
        if(!root->left && root->right)
            return 1 + getDepth(root->right);
        return 1 + min(getDepth(root->left), getDepth(root->right));
    }

    int minDepth(TreeNode* root) {
        return getDepth(root);
    }
};
// @lc code=end

