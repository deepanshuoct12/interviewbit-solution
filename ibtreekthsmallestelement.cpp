/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int kthSmallest(TreeNode* root, int& count, int k)
{
    // base case
    if (root == NULL)
    return -1;

    // search in left subtree
    int leftvalue = kthSmallest(root->left, count, k);

    // if k'th smallest is found in left subtree, return it
    if (leftvalue != -1)
        return leftvalue;

    // if current element is k'th smallest, return it
    count++;
    if (count == k)
        return root->val;

    // else search in right subtree
    return kthSmallest(root->right, count, k);
}
//  void helper(TreeNode* root,vector<int> &v)
//  {
//      if(root==NULL)
//      return;

//      helper(root->left,v);
//      v.push_back(root->val);
//      helper(root->right,v);
//  }
int Solution::kthsmallest(TreeNode* A, int B) {
    int count=0;
    return kthSmallest(A,count,B);
//     vector<int>v;
//     v.clear();
//      helper(A,v);
//   return v[B-1];
}

