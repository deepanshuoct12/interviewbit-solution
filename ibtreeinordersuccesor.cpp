/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* findnode(TreeNode* root,int v)
 {
     if(root==NULL)
     return NULL;

     if(root->val==v)
     return root;

     TreeNode* ans=findnode(root->left,v);
     if(ans!=NULL)
     return ans;
     return findnode(root->right,v);
 }
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {

    TreeNode* node = findnode(A,B);
    if(node==NULL)
    return NULL;

    if(node->right!=NULL)
    {
        TreeNode* curr=node->right;

        while(curr->left!=NULL)
        curr=curr->left;

        return curr;
    }
    else
    {
        TreeNode* ancestor=A,*successor=NULL;

        while(ancestor!=node)
        {
            if(node->val>ancestor->val)
                ancestor=ancestor->right;
            else
            {
                successor=ancestor;
                ancestor=ancestor->left;
            }
        }
        return successor;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

