/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {

    if(A==NULL)
     return 0;

     int lh=maxDepth(A->left);
     int rh=maxDepth(A->right);

     return max(lh,rh)+1;

}
}
