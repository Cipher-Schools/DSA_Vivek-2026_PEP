// https://leetcode.com/problems/binary-tree-level-order-traversal/description/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return{};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        TreeNode* extra = new TreeNode(1001);
        q.push(root);
        q.push(extra);
        while(q.front()!=extra){
            vector<int> temp;
            while(q.front()!=extra){
                temp.push_back(q.front()->val);
                if(q.front()->left!=NULL)
                    q.push(q.front()->left);
                if(q.front()->right!=NULL)
                    q.push(q.front()->right);
                q.pop();
            }
            // cout << temp.size() << "\n";
            q.pop();
            q.push(extra);
            ans.push_back(temp);
        }
        return ans;
    }
};