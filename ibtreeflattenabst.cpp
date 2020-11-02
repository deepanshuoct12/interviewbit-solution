/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {

    if(A==NULL)
    return NULL;

    if(A->left==NULL && A->right==NULL)
    return A;

    if(A->left!=NULL && A->right==NULL)
    {
        A->right=A->left;
        A->left=NULL;
        TreeNode* l=flatten(A->right);
        A->right=l;
        return A;
    }

    if(A->right!=NULL && A->left==NULL)
    {
        TreeNode* r=flatten(A->right);
        r->left=NULL;
        A->right=r;
        return A;
    }

    TreeNode* temp=A->right;
    A->right=A->left;
    A->left=NULL;
    TreeNode *l = flatten(A->right);
    TreeNode *r = flatten(temp);


    A->right=l;
    TreeNode* last=l;

    while(last->right!=NULL)
    last=last->right;
    last->right=r;
    return A;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
/*
TreeNode* Solution::flatten(TreeNode* A)
{
    if(A==NULL)
        return NULL;
    TreeNode *node=A;
    while(node!=NULL)
    {
        if(node->left!=NULL)
        {
            TreeNode *rtmost=node->left;
            while(rtmost->right!=NULL)
                rtmost=rtmost->right;
            rtmost->right=node->right;
            node->right=node->left;
            node->left=NULL;
        }
        node=node->right;
    }
    return A;
}
*/
