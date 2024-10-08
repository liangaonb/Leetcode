/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getHeight(TreeNode* root){
        if(root==nullptr)
            return 0;
        int leftHeight = getHeight(root->left);
        if(leftHeight==-1)
            return -1;
        int rightHeight = getHeight(root->right);
        if(rightHeight==-1)
            return -1;
        return abs(leftHeight - rightHeight) > 1 ? -1 : (1 + max(leftHeight, rightHeight));
    }

    bool isBalanced(TreeNode* root) {
        return getHeight(root) == -1 ? false : true;
    }
};
// @lc code=end

