/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    queue<TreeNode*>q;
    q.push(A);
    q.push(NULL);
    vector<int>v,ans;


    if(A==NULL)
    return ans;

    while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();

        if(curr==NULL)
        {
            if(q.empty())
            break;

            ans.push_back(v[v.size()-1]);

            q.push(NULL);
            v.clear();
            continue;
        }

        v.push_back(curr->val);

        if(curr->left!=NULL)
        q.push(curr->left);

        if(curr->right!=NULL)
        q.push(curr->right);
    }
    ans.push_back(v[v.size()-1]);
    return ans;
}

