class node
{
public:
    char data;
    int freq;
   unordered_map<char,node*> children;

    bool isterminal;

    node(char d)
    {
        data=d;
        isterminal=false;
        freq=1;
    }
};

class trie
{
    node *root;
    public:
        trie()
        {
            root=new node('\0');
        }

     // insertion
     void addword(string word)
     {
         node *temp=root;

         for(int i=0;i<word.size();i++)
         {
             char ch=word[i];
             if(temp->children.count(ch)==0)
             {
                 node *child = new node(ch);
                 temp->children[ch]=child;
                 temp=child;
             }
             else
             {
                 temp=temp->children[ch];
                 temp->freq+=1;
             }
         }
         temp->isterminal=true;
     }

     // searching
      string findprefix(string word)
     {
         node *temp=root;
         string s;
         for(int i=0;i<word.size();i++)
         {
             char ch=word[i];

             if(temp->children.count(ch))
             {

                 temp=temp->children[ch];
                  s.push_back(ch);

                 if(temp->freq==1)
                 break;

             }

         }
        return s;


     }


};
vector<string> Solution::prefix(vector<string> &A) {
    trie t;
    for(int i=0;i<A.size();i++)
        t.addword(A[i]);

    vector<string>ans;
    for(int i=0;i<A.size();i++)
    {
       string s=t.findprefix(A[i]);
       ans.push_back(s);
    }
      return ans;
}

