/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 TreeNode* helper(const vector<int> &A,int s,int e){

     if(s>e)
     return NULL;

     int m=(s+e)/2;
     TreeNode* root=new TreeNode(A[m]);

     root->left=helper(A,s,m-1);
     root->right=helper(A,m+1,e);

     return root;

 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    if(A.size()==0)
    return NULL;

    int s=0;
    int e=A.size()-1;
    return helper(A,s,e);
}

