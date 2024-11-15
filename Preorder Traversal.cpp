#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
void preOrder(TreeNode* root, vector<int>& temp){
    if(!root) return ;

    temp.push_back(root->val);
    preOrder(root->left, temp);
    preOrder(root->right, temp);
}
vector<int> preorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> res;
    TreeNode* temp = root;
    preOrder(temp, res);
    return res;
}
