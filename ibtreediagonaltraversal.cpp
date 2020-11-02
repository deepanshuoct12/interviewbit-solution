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

     vector<int>ans;
     if(A==NULL)
     return ans;

     queue<TreeNode*>q;
     q.push(A);
     while(!q.empty()){

         TreeNode* root=q.front();
         q.pop();

         while(root!=NULL)
         {
             ans.push_back(root->val);
             if(root->left!=NULL)
             q.push(root->left);
             root=root->right;
         }
     }
     return ans;
    // queue<pair<TreeNode*,int> >q;

    // q.push(make_pair(A,0));
    // map<int,vector<int> >mp;

    // while(!q.empty()){
    //     pair<TreeNode*,int> p=q.front();
    //     q.pop();

    //     int i=p.second;

    //     mp[p.second].push_back(p.first->val);

    //     if(p.first->left!=NULL)
    //     q.push(make_pair(p.first->left,i+1));

    //      if(p.first->right!=NULL)
    //     q.push(make_pair(p.first->right,i));
    // }


    // for(auto x:mp)
    // {    vector<int>vec=x.second;
    //     for(auto val:vec)
    //      ans.push_back(val);
    // }
    // return ans;
}

