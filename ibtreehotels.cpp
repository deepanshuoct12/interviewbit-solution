// class node
// {
// public:
//     char data;

//   unordered_map<char,node*> children;

//     bool isterminal;

//     node(char d)
//     {
//         data=d;
//         isterminal=false;

//     }
// };
// class trie
// {
//     node *root;
//     public:
//         trie()
//         {
//             root=new node('\0');
//         }
//      // insertion
//      void addword(string word)
//      {
//          node *temp=root;

//          for(int i=0;i<word.size();i++)
//          {
//              char ch=word[i];
//              if(temp->children.count(ch)==0)
//              {
//                  node *child = new node(ch);
//                  temp->children[ch]=child;
//                  temp=child;
//              }
//              else
//                  temp=temp->children[ch];

//          }
//          temp->isterminal=true;
//      }
//      // searching
//      bool search(string word)
//      {
//          node *temp=root;
//          string s;
//          for(int i=0;i<word.size();i++)
//          {
//              char ch=word[i];

//              if(temp->children.count(ch))
//              {
//                  temp=temp->children[ch];
//              }
//              else
//              return false;

//          }
//         return temp->isterminal;


//      }
// };

// bool comp(pair<int,int> a,pair<int,int> b)
// {
//     if(a.second<b.second)
//     return true;

// }

// vector<int> Solution::solve(string A, vector<string> &B) {
//     trie t;
//     string s;
//     A.push_back('_');

//     vector<pair<int,int> >v;

//     for(int i=0;i<A.size();i++)
//     {
//         if(A[i]=='-')
//         {
//             t.addword(s);
//             s.clear();
//         }
//         else
//          s.push_back(A[i]);
//     }

//     for(int i=0;i<B.length();i++)
//     {
//         string s=B[i];
//         string temp;
//         s.push_back('_');
//         int c=0;

//         for(int j=0;i<s.length();j++)
//         {
//             if(s[j]=='_')
//             {
//                 bool f=t.search(temp);
//                 if(f)
//                   c++;

//                 temp.clear();
//             }
//             else
//             temp.push_back(s[j]);

//         }

//         v.push_back(make_pair(i,c));
//     }

//     sort(v.begin(),v.end(),comp);

//     vector<int>ans;

//     for(auto x:v)
//     ans.push_back(x.first);

//     return ans;
// }

class node{
public:
int index;
int data;
node* left;
node *right;
};
node* newnode( int i , int k){
node* temp = new node();
temp->index =i;
temp->data = k;
temp->left=NULL;
temp->right=NULL;
return (temp);
}
node* insert(node* root , int i , int k){
if ( root == NULL){
root = newnode(i,k);
}else if (root ->data < k){
root->right = insert(root->right,i,k);
}else{
root->left = insert(root->left, i, k);
}
return root;
}

void inorder( node* root , vector<int> &v){
if ( root == NULL)return ;
inorder(root->left , v);
v.push_back( root->index);
inorder( root->right, v);
}

vector<int> Solution::solve(string A, vector<string> &B) {

map<string,int> m;

string s="";

for ( int i=0;i<A.size();i++){
if ( A[i]!='_'){
s.push_back(A[i]);
}else {
m[s]++;
s.clear();

}

}
m[s]++;

node* root=NULL;
for ( int i=0;i<B.size();i++){
    string t = B[i];
    int k =0;
    string s="";
    for ( int j=0;j<t.size();j++){
    if ( t[j]!='_'){
        s.push_back(t[j]);
    }else {
        if ( m.find(s)!=m.end())k++;
        s.clear();
    }
}
if ( m.find(s)!=m.end())k++;
 root =insert(root,i,k);
}
vector<int>v;
inorder(root , v);
reverse( v.begin(),v.end());
return v;
}
