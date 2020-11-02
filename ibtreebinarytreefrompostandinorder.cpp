/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode * build(vector<int> &a, vector<int> &b, int &post,unordered_map<int,int> &m,int start,int end)
 {
    if(start>end) return NULL;
    int curr = b[post--];
    TreeNode *root = new TreeNode(curr);
    if(start == end) return root;
    root->right = build(a,b,post,m,m[curr]+1,end);
    root->left = build(a,b,post,m,start,m[curr]-1);
    return root;
 }
TreeNode* Solution::buildTree(vector<int> &a, vector<int> &b) {
    unordered_map<int,int> m;
    for(int i=0; i<a.size(); i++)
    {
        m[a[i]] = i;
    }
    int x= b.size()-1;
    return build(a,b,x,m,0,a.size()-1);
}

//  TreeNode* helper(vector<int> &in,vector<int> &post,int s,int e,int &i)
// {
//      if(s>e)
//      return NULL;

//      TreeNode* root = new TreeNode(post[i]);
//      int index;

//      if(s==e)
//      return root;
//      i--;
//      for(int j=s;j<=e;j++)
//      {
//          if(post[i]==in[j])
//          {
//              index=j;
//              break;
//          }
//      }

//       root->right=helper(in,post,index+1,e,i);
//       root->left=helper(in,post,s,index-1,i);


//      return root;

// }

// TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
//     int n=A.size();
//   int i=n-1;
//     TreeNode* ans=helper(A,B,0,n-1,i);
//     return ans;
// }

