/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int helper(TreeNode* root,int &result)
 {
     if(root==NULL)
     return 0;

     int left = helper(root->left,result);
     int right = helper(root->right,result);

     int ms=max(max(left,right)+root->val,root->val);
     int m21=max(ms,left+right+root->val);
      result=max(m21,result);

     return ms;
 }
int Solution::maxPathSum(TreeNode* A) {
    int result=INT_MIN;
    helper(A,result);
    return result;
}

