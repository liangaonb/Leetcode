/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        queue<Node *> que;
        if(root != nullptr)
            que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++){
                Node *node = que.front();
                que.pop();
                tmp.push_back(node->val);
                for(auto x : node->children){
                    que.push(x);
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
};
// @lc code=end

