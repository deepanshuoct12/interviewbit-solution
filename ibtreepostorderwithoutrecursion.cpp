vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;

    stack<TreeNode*> nodestack;
    nodestack.push(A);
    while(!nodestack.empty()){
        TreeNode* root=nodestack.top();
        nodestack.pop();

        ans.push_back(root->val);

        if(root->left)
        nodestack.push(root->left);
        if(root->right)
        nodestack.push(root->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

