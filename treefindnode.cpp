 TreeNode* findnode(TreeNode* root,int v)
 {
     if(root==NULL)
     return NULL;

     if(root->val==v)
     return root;

     TreeNode* ans=findnode(root->left,v);
     if(ans!=NULL)
     return ans;
     return findnode(root->right,v);
 }
/*
 TreeNode* Find(TreeNode *root, int data) {
            while (root != NULL && root->val != data) {
                if (data < root->val) root = root->left;
                else root = root->right;
            }
            if (root != NULL && root->val == data) return root;
            return NULL;
        }*/
