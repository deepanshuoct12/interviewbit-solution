/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void fillPathSum(TreeNode* A,int B,vector<vector<int>> &ans,vector<int>& path)//=vector<int>()
{
    if(A==NULL)
        return;
    //else
        path.push_back(A->val);

    if(A->left==NULL && A->right==NULL)
      {
          if(A->val==B)
          ans.push_back(path);

          path.pop_back();
          return;

      }

        fillPathSum(A->left, B-(A->val), ans, path);
        fillPathSum(A->right, B-(A->val), ans, path);
        path.pop_back();
        return;

}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B)
{
    vector<vector<int>> ans;
    vector<int>path;
    fillPathSum(A, B, ans,path);
    return ans;
}


