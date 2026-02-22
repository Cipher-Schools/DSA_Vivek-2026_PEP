// https://leetcode.com/problems/same-tree/description/

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
    void preOrder(TreeNode* p, vector<int> &v){
        if(p==NULL){
            v.push_back(1e4+1);
            return;
        }
        v.push_back(p->val);
        preOrder(p->left, v);
        preOrder(p->right, v);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> first;
        vector<int> second;
        preOrder(p, first);
        preOrder(q, second);
        return first==second;
    }
};