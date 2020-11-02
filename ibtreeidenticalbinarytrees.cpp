/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 */

void traverse(TreeNode* root,vector<int>& v)
{
     if(root==NULL)
     return;

     v.push_back(root->val);
     traverse(root->left,v);
     traverse(root->right,v);

 }
int Solution::isSameTree(TreeNode* A, TreeNode* B) {

    vector<int>v1;
    traverse(A,v1);
    vector<int>v2;
    traverse(B,v2);
    return v1==v2;
}

