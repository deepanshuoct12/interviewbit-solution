/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int height(TreeNode*root)
 {
     if(root==NULL)
     return 0;

     int lh=height(root->left);
     int rh=height(root->right);

     return max(lh,rh)+1;
 }

int Solution::isBalanced(TreeNode* A) {
    if(A==NULL)
    return 1;

    int l=height(A->left);
    int r=height(A->right);

    if(abs(l-r)<=1)
    return isBalanced(A->left)&&isBalanced(A->right);

    return 0;
}

