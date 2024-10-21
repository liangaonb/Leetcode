/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    void traversal(TreeNode* root, vector<int>& vec){
        if(root==nullptr)
            return;
        traversal(root->left, vec);
        vec.push_back(root->val);
        traversal(root->right, vec);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> vec;
        traversal(root, vec);
        for (int i = 1; i < vec.size(); ++i){
            if(vec[i]<=vec[i-1])
                return false;
        }
        return true;
    }
};
// @lc code=end

