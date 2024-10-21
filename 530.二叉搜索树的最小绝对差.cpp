/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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

    int getMinimumDifference(TreeNode* root) {
        vector<int> vec;
        traversal(root, vec);
        vector<int> diff(vec.size()-1);
        for (int i = 0; i < vec.size()-1; ++i){
            diff[i] = vec[i + 1] - vec[i];
        }
        auto min_it = min_element(diff.begin(), diff.end());
        return *min_it;
    }
};
// @lc code=end

