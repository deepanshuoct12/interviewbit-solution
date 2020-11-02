#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


 int height(TreeNode*root)
 {
     if(root==NULL)
     return 0;

     int lh=height(root->left);
     int rh=height(root->right);

     return max(lh,rh)+1;
 }

int isBalanced(TreeNode* A) {
    if(A==NULL)
    return 1;

    int l=height(A->left);
    int r=height(A->right);

    if(abs(l-r)<=1)
    return isBalanced(A->left)&&isBalanced(A->right);

    return 0;
}
/*
bool isBalanced(node* root, int* height)
{

    / lh --> Height of left subtree
    //rh --> Height of right subtree
    int lh = 0, rh = 0;

    /* l will be true if left subtree is balanced
    and r will be true if right subtree is balanced
    int l = 0, r = 0;

    if (root == NULL) {
        *height = 0;
        return 1;
    }

    /* Get the heights of left and right subtrees in lh and rh
    And store the returned values in l and r
    l = isBalanced(root->left, &lh);
    r = isBalanced(root->right, &rh);

    /* Height of current node is max of heights of left and
    right subtrees plus 1
    *height = (lh > rh ? lh : rh) + 1;

    /* If difference between heights of left and right
    subtrees is more than 2 then this node is not balanced
    so return 0
    if (abs(lh -rh) >= 2)
        return 0;

    /* If this node is balanced and left and right subtrees
    are balanced then return true
    else
        return l && r;
} */
int main()
{

    return 0;
}
