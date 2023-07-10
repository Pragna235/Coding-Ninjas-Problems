#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
    
    template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int dfs(TreeNode<int> *root){
    if(root==NULL)
    return 0;
    if(!root->left)
    return 1+dfs(root->right);
    else if(!root->right)
    return 1+dfs(root->left);
    else
    return 1+min(dfs(root->left),dfs(root->right));
}
int minDepth(TreeNode<int>* root)
{
    // write your code here
    return dfs(root);
}
