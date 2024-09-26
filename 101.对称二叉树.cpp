/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool compare(TreeNode* left, TreeNode* right){
        if(left==nullptr && right!=nullptr)
            return false;
        else if(left!=nullptr && right==nullptr)
            return false;
        else if(left==nullptr && right==nullptr)
            return true;
        else if(left->val != right->val)
            return false;
        bool res = compare(left->left, right->right) && compare(left->right, right->left);
        return res;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
            return true;
        return compare(root->left, root->right);
    }
};
// @lc code=end

