// https://leetcode.com/problems/validate-binary-search-tree/description/

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

    bool isPos(TreeNode* root, long long low, long long high){
        if(root==NULL)
            return true;
        if(low>=high)
            return false;
        if(root->val<=low || root->val>=high)
            return false;
        return(isPos(root->left, low, root->val) && isPos(root->right, root->val, high));
    }

    bool isValidBST(TreeNode* root) {
     long long low = -pow(2, 31)-1, high = pow(2, 31);
     return isPos(root, low, high);
    }
};