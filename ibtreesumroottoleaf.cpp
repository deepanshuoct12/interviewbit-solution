/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void fillPathSum(TreeNode* A,vector<vector<long long int> >&ans,vector<long long int>& path)
{
    if(A==NULL)
        return;

        path.push_back(A->val);

    if(A->left==NULL && A->right==NULL)
      {

          ans.push_back(path);

          path.pop_back();
          return;

      }

        fillPathSum(A->left,ans, path);
        fillPathSum(A->right,ans, path);
        path.pop_back();
        return;

}
int Solution::sumNumbers(TreeNode* A) {

    vector<vector<long long int> > ans;
    vector<long long int>path;
    fillPathSum(A,ans,path);

    long long int sum=0;
    for(int i=0;i<ans.size();i++)
    {
        long long int no=0;
        for(int j=0;j<ans[i].size();j++)
        {
            no=(((no*10)%1003 + (ans[i][j])%1003)%1003);
        }
        sum+=(no%1003);
    }
    return int(sum%1003);
}

