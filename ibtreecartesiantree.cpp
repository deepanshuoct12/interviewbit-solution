/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 TreeNode* helper(int st,int en,vector<int>& v)
{

    if(st>en)
     return NULL;

 int mx=-1;
 int idx;
 for(int i=st;i<=en;i++)
 {
     if(v[i]>mx)
     {
         mx=v[i];
         idx=i;
     }
 }
  TreeNode* root = new TreeNode(mx);
  root->left = helper(st,idx-1,v);
  root->right = helper(idx+1,en,v);
  return root;
}

TreeNode* Solution::buildTree(vector<int> &A)
{
  TreeNode* ans=helper(0,A.size()-1,A);
  return ans;
}

