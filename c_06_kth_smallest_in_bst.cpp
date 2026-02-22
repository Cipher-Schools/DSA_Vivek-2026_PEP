// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    void inOrder(TreeNode* root, int k, int *count, int *value){
        if(root==NULL)
            return;
        inOrder(root->left, k, count, value);
        (*count)++;
        if(*count == k){
            *value = root->val;
        }
        inOrder(root->right, k, count, value);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        int count = 0, value;
        inOrder(root, k, &count, &value);
        return (value);    
    }
};