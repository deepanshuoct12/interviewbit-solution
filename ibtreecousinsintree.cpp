/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


vector<int> Solution::solve(TreeNode* A, int B) {

    vector<int>ans;

    queue<TreeNode*>q;
    q.push(A);
    q.push(NULL);
    int f=0;
    unordered_map<int,int>mp;
    while(!q.empty()){

     TreeNode *curr = q.front();
       q.pop();

        if(curr==NULL)
        {
          if(f==1)
              break;

           ans.clear();
            q.push(NULL);
            continue;
        }

          ans.push_back(curr->val);
          if(curr->val==B)
          f=1;

         if(curr->left!=NULL)
         {
             q.push(curr->left);
             mp[curr->left->val]=curr->val;
         }
         if(curr->right!=NULL)
         {
             q.push(curr->right);
              mp[curr->right->val]=curr->val;
         }

    }
    vector<int>ans2;
    for(auto x:ans)
      {
          if(mp[x]==mp[B])
          continue;

          ans2.push_back(x);
      }

      return ans2;
}

