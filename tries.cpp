#include<bits/stdc++.h>
using namespace std;
//#define hashmap unordered_map<char,node*>

class node
{
public:
    char data;
   unordered_map<char,node*> children;

    bool isterminal;

    node(char d)
    {
        data=d;
        isterminal=false;
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
     void addword(char *word)
     {
         node *temp=root;

         for(int i=0;word[i]!='\0';i++)
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
             }
         }
         temp->isterminal=true;
     }

     // searching
     bool search(char *word)
     {
         node *temp=root;

         for(int i=0;word[i]!='\0';i++)
         {
             char ch=word[i];
             if(temp->children.count(ch))
             {
                 temp=temp->children[ch];
             }
             else
                return false;
         }

         return temp->isterminal;

     }


};




int main()
{
    char word[10][100]={"apple","ape","codes","coding blocks","no"};

    trie t;

    for(int i=0;i<5;i++)
        t.addword(word[i]);

    char searchword[30];
    cin>>searchword;

    if(t.search(searchword))
    {
        cout<<searchword<<" "<<"found"<<"\n";

    }

    else
    {
        cout<<"not found";
    }

    return 0;
}
