vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int>res;
    stack<TreeNode*> nodestack;
    if(A==NULL)
    return res;

    TreeNode *curr=A;
    while(!nodestack.empty() || curr){
        if(curr)
        {
            nodestack.push(curr);
            curr=curr->left;
        }
        else
        {
            TreeNode* pnode = nodestack.top();
            res.push_back(pnode->val);
            nodestack.pop();
            curr=pnode->right;
        }
    }
    return res;



}

