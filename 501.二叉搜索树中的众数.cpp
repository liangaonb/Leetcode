/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> vec;

    void traversal(TreeNode* root){
        if(root==nullptr)
            return;
        traversal(root->left);
        vec.push_back(root->val);
        traversal(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        traversal(root);
        unordered_map<int, int> freq;
        for(int num : vec){
            freq[num]++;
        }
        vector<int> res;
        int maxCount = 0;
        for(const auto& pair : freq){
            if(pair.second>maxCount){
                maxCount = pair.second;
                res.clear();
                res.push_back(pair.first);
            }
            else if(pair.second == maxCount){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};
// @lc code=end

