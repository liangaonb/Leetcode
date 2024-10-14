/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void traversal(TreeNode* root, vector<string>& res, vector<int>& path){
        path.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            string sPath("");
            for (int i = 0; i < path.size()-1; i++){
                sPath += to_string(path[i]);
                sPath += "->";
            }
            sPath += to_string(path[path.size() - 1]);
            res.push_back(sPath);
        }
        if(root->left){
            traversal(root->left, res, path);
            path.pop_back();
        }
        if(root->right){
            traversal(root->right, res, path);
            path.pop_back();
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<int> path;
        traversal(root, res, path);
        return res;
    }
};
// @lc code=end

