/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {

    if(A==NULL)
    return;

    queue<TreeLinkNode*> q;
  //  vector<TreeLinkNode*> v;

    q.push(A);
    q.push(NULL);
    TreeLinkNode* curr2=NULL;

    while(!q.empty())
    {
       TreeLinkNode* curr=q.front();
        q.pop();

        if(curr==NULL)
        {
            if(q.empty())
            break;

        //   for(int i=0;i<v.size()-1;i++)
        //       v[i]->next=v[i+1];

        //       v[v.size()-1]->next=NULL;

        //       v.clear();

              curr2->next=NULL;
              curr2=NULL;

              q.push(NULL);
              continue;
        }

     //   v.push_back(curr);
        if(curr2==NULL)
        curr2=curr;
        else
        {
            curr2->next=curr;
            curr2=curr;
        }
        if(curr->left!=NULL)
        q.push(curr->left);


        if(curr->right!=NULL)
        q.push(curr->right);


    }
    //   for(int i=0;i<v.size()-1;i++)
    //       v[i]->next=v[i+1];

      // v[v.size()-1]->next=NULL;
}

