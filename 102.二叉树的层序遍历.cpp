/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> que;
        if(root != nullptr){
            que.push(root);
        }
        vector<vector<int>> res;
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            for (int i = 0; i < size; i++){
                TreeNode *node = que.front();
                vec.push_back(node->val);
                que.pop();
                if (node->left != nullptr)
                    que.push(node->left);
                if (node->right != nullptr)
                    que.push(node->right);
            }
            res.push_back(vec);
        }

        return res;
    }
};
// @lc code=end

