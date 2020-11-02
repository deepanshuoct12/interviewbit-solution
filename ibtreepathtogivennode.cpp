/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 bool helper(TreeNode* root,int v,vector<int>& ans)
 {
     if(root==NULL)
     return 0;

     ans.push_back(root->val);

     if(root->val==v)
         return 1;

     if(helper(root->left,v,ans) || helper(root->right,v,ans))
     return 1;

     ans.pop_back();
     return 0;

 }

vector<int> Solution::solve(TreeNode* A, int B) {

    vector<int>ans;
    helper(A,B,ans);
    return ans;
}

