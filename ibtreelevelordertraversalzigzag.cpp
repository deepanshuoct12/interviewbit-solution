/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {

    queue<TreeNode*>q;
    q.push(A);
    q.push(NULL);
    vector<int>v;
    vector<vector<int> >ans;
     int f=0;
    while(!q.empty()){
       TreeNode *curr = q.front();
       q.pop();
        if(curr==NULL){
            if(q.empty())
            break;
           if(f==1)
           {
               reverse(v.begin(),v.end());
               ans.push_back(v);
               f=0;
           }
           else
           {
           ans.push_back(v);
           f=1;
           }

           v.clear();
            q.push(NULL);
            continue;
        }

          v.push_back(curr->val);

         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);

    }

    if(f==0)
    ans.push_back(v);
    else if(f==1)
    {
        reverse(v.begin(),v.end());
        ans.push_back(v);
    }

    return ans;
}

