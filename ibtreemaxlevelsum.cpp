/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A) {

    queue<TreeNode*>q;
    q.push(A);
    q.push(NULL);
    int sum=0;
    int m=INT_MIN;
    while(!q.empty()){
        TreeNode *curr = q.front();
       q.pop();
        if(curr==NULL){
            if(q.empty())
            break;
            if(sum>m)
            m=sum;
            sum=0;
            q.push(NULL);
            continue;
        }

          sum+=curr->val;

         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);

    }
    if(sum>m)
    m=sum;
    return m;
}

