void go(string s,int open,int close,int pos,int n,vector<string>& v)
{
    if(pos==2*n)
    {
        if(open==close)
        {
            v.push_back(s);
            //cout<<s<<"\n";
        }
        else
            return;
    }
    if(open>close)
    {

        go(s+")",open,close+1,pos+1,n,v);
    }

    if(open<n)
    {
        go(s+"(",open+1,close,pos+1,n,v);
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string>v;
      go("(",1,0,1,A,v);
      reverse(v.begin(),v.end());
      return v;
}
