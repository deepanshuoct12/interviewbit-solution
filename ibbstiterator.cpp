/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//#include<bits/stdc++.h>



// void helper(TreeNode* root,vector<int>& v)
// {
//     if(root==NULL)
//     return;

//     helper(root->left,v);
//     v.push_back(root->val);
//     helper(root->right,v);
// }

// vector<int>v;
stack<TreeNode*>s;

BSTIterator::BSTIterator(TreeNode *root) {
//     v.clear();
//   helper(root,v);

 while(!s.empty())
 s.pop();

 TreeNode*curr=root;

 while(curr!=NULL)
 {
     s.push(curr);
     curr=curr->left;
 }

}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {

    // if(v.empty())
    // return false;
    // return true;
     if(s.empty())
     return false;

     return true;

}

/** @return the next smallest number */
int BSTIterator::next() {

    if(s.empty())
    return -1;

    int v = s.top()->val;

    TreeNode* curr = s.top()->right;
    s.pop();

    while(curr!=NULL)
    {
        s.push(curr);
        curr=curr->left;

    }

    return v;
//     int ans=-1;
//   if(!v.empty())
//   ans=v[0];

//   v.erase(v.begin());
//   return ans;
}

