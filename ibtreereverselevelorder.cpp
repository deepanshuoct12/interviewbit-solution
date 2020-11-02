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
    vector<int>ans;
    vector<int>temp;

    while(!q.empty()){
        TreeNode *curr = q.front();
       q.pop();
        if(curr==NULL){
            if(q.empty())
            break;

            reverse(temp.begin(),temp.end());
            for(auto x:temp)
            ans.push_back(x);

            temp.clear();
            q.push(NULL);
            continue;
        }

        temp.push_back(curr->val);

         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);

    }
       reverse(temp.begin(),temp.end());
        for(auto x:temp)
        ans.push_back(x);

    reverse(ans.begin(),ans.end());
    return ans;

}

