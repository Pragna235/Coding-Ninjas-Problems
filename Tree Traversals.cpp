/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preOrder(TreeNode* root, vector<int>& temp){
    //vector<int> temp;
    if(root==NULL) return;

    temp.push_back(root->data);
    preOrder(root->left, temp);
    preOrder(root->right, temp);
}
void postOrder(TreeNode* root, vector<int>& temp){
    //vector<int> temp;
    if(root==NULL) return;

    postOrder(root->left, temp);
    postOrder(root->right, temp);
    temp.push_back(root->data);

}
void inOrder(TreeNode* root, vector<int>& temp){
    //vector<int> temp;
    if(root==NULL) return;

    inOrder(root->left, temp);
    temp.push_back(root->data);
    inOrder(root->right, temp);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> result(3);
    TreeNode* temp1 = root;
    TreeNode* temp2 = root;
    TreeNode* temp3 = root;
    
    inOrder(temp1,result[0]);
    preOrder(temp2,result[1]);
    postOrder(temp3,result[2]);

    return result;


}
