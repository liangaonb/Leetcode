/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode *> que;
        if(root != nullptr)
            que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<double> tmp;
            for (int i = 0; i < size; ++i){
                TreeNode *node = que.front();
                que.pop();
                tmp.push_back(node->val);
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            double sum = 0;
            for(auto x : tmp){
                sum += x;
            }
            double avg = sum / tmp.size();
            res.push_back(avg);
        }
        return res;
    }
};
// @lc code=end

