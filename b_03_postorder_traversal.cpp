// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

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

    void itPost(TreeNode* root, vector<int> &ans){
        stack<TreeNode*> s;
        TreeNode* prev = NULL;
        while(!s.empty() || root!=NULL){
            while(root!=NULL){
                s.push(root);
                root=root->left;
            }
            root = s.top();
            if(root->right==NULL || root->right==prev){
                ans.push_back(root->val);
                prev = root;
                s.pop();
                root = NULL;
            }
            else
                root = root->right;
    }
    }

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        itPost(root, ans);
        return ans;      
    }
};