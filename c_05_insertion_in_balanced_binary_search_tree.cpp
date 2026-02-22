#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(TreeNode* root){
    if(root==NULL)
        return -1;
    return max(height(root->left), height(root->right))+1;
}

bool isBalanced(TreeNode* root){
    if(root==NULL)
        return true;
    return (abs(height(root->left)-height(root->right))<=1);
}

int balanceFactor(TreeNode* root){
    if(root==NULL)
        return 0;
    return (height(root->left)-height(root->right));
}

TreeNode* LLRotation(TreeNode* root){
    TreeNode* parent = root->left;
    root->left = parent->right;
    parent->right = root;
    return parent;
}

TreeNode* RRRotation(TreeNode* root){
    TreeNode* parent = root->right;
    root->right = parent->left;
    parent->left = root;
    return parent;
}

TreeNode* balance(TreeNode* root){
    if(balanceFactor(root)==2 && balanceFactor(root->left)>=0)
        root = LLRotation(root);
    if(balanceFactor(root)==-2 && balanceFactor(root->right)<=0)
        root = RRRotation(root);
    if(balanceFactor(root)==2 && balanceFactor(root->left)<=-1){
        root->left = RRRotation(root->left);
        root = LLRotation(root);

    }
    if(balanceFactor(root)==-2 && balanceFactor(root->right)>=1){
        root->right = LLRotation(root->right);
        root=RRRotation(root);
    }
    return root;
}


TreeNode* insertion(TreeNode* root, TreeNode* newNode){
    if(root==NULL)
        return newNode;
    if(root->val>newNode->val)
        root->left = insertion(root->left, newNode);
    else
        root->right = insertion(root->right, newNode);
    root = balance(root);
    
    return root;
}

void inorder(TreeNode* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout << root->val << " is root ";
    if(root->left)
        cout << root->left->val << " is left of root ";
    if(root->right)
        cout << root->right->val << " is right of root ";
    cout << "\n";
    inorder(root->right);
}

void levelOrderTraversal(TreeNode* root){
    if(root==NULL)
        return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int width = q.size();
        while(width){
            width--;
            cout << q.front()->val << " ";
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            q.pop();
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    struct TreeNode* root = NULL;
    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        TreeNode* node = new TreeNode(value);
        root = insertion(root, node);
    }
    inorder(root);
    levelOrderTraversal(root);
}