// https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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

    void itPreorder(TreeNode* root, vector<int> &ans){
        stack<TreeNode*> s;
        while(!s.empty() || root!=NULL){
            while(root!=NULL){
                ans.push_back(root->val);
                s.push(root);
                root=root->left;
            }
            root = s.top()->right;
            s.pop();
    }
    }

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> ans;
       itPreorder(root, ans);      
       return ans;
    }
};