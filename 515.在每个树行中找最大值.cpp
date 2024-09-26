/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 在每个树行中找最大值
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(root == nullptr)
            return res;
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++){
                TreeNode *node = que.front();
                que.pop();
                tmp.push_back(node->val);
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            int maxVal = *(max_element(tmp.begin(), tmp.end()));
            res.push_back(maxVal);
        }
        return res;
    }
};
// @lc code=end

