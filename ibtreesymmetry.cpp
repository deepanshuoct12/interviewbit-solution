 bool solve(TreeNode* root1,TreeNode* root2)
{

 if(root1==NULL && root2==NULL)
 return 1;
 if(root2==NULL)
 return 0;
 if(root1==NULL)
 return 0;

 if ( root1->val==root2->val )
{
    return solve(root1->left,root2->right)&&solve(root1->right,root2->left);
}
return false;
}

int Solution::isSymmetric(TreeNode* root) {

if(root==NULL)
return 1;

return solve(root->left,root->right);
}
