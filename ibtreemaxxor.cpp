
class node{
public:
    node *left;
    node *right;
    node(){left=NULL;right=NULL;}

};

class trie{

public:
node *root;
trie()
{
    root = new node();
}

void insert(int n){

node *temp=root;

for(int i=31;i>=0;i--)
{
    int bit=(n>>i)&1;

    if(bit==0)
    {
       if(temp->left==NULL)
       {
           temp->left = new node();
       }
       temp=temp->left;
    }
    else
    {
       if(temp->right==NULL)
       {
           temp->right = new node();
       }
       temp=temp->right;
    }
}

}

int maxxorhelp(int value){
int currans=0;
node *temp=root;

for(int i=31;i>=0;i--){
    int bit=(value>>i)&1;

    if(bit==0)
    {
    if(temp->right!=NULL)
    {
        temp=temp->right;
        currans+=(1<<i);
    }
    else {
        temp=temp->left;
    }

    }
    else {
        if(temp->left!=NULL)
        {
            temp=temp->left;
            currans+=(1<<i);
        }
        else
            temp=temp->right;
    }
}
return currans;

}

int maxxor(vector<int> &v)
{
    int n=v.size();
    int maxxor=0;
    for(int i=0;i<n;i++)
    {
        int val=v[i];
        int currmax =  maxxorhelp(val);
        maxxor = max(maxxor,currmax);
    }
    return maxxor;
}

};

int Solution::solve(vector<int> &A, vector<int> &B) {

    trie t;

   for(auto x:A)
    t.insert(x);

   return t.maxxor(B);


    // int ans=INT_MIN;
    // for(int i=0;i<A.size();i++)
    // {
    //     for(int j=0;j<B.size();j++)
    //     {
    //         if(i==j)
    //         continue;
    //         ans=max(ans,A[i]^B[j]);
    //     }
    // }
    // return ans;
}

