/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int countNodes(TreeNode* root) {
        if(root==nullptr)
            return 0;
        queue<TreeNode *> que;
        que.push(root);
        int res = 0;
        res++;
        while(!que.empty()){
            int size = que.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++){
                TreeNode *node = que.front();
                que.pop();
                if(node->left){
                    que.push(node->left);
                    res++;
                }
                if(node->right){
                    que.push(node->right);
                    res++;
                }
            }
        }
        return res;
    }
};
// @lc code=end

