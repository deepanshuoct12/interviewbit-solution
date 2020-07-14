#include<bits/stdc++.h>
using namespace std;

string solve(string A) {

int idx=0;
int jdx=A.length()-1;

   while(A[idx]==' ')
    idx++;

   while(A[jdx]==' ')
    jdx--;


string res = "";
stack<string> st;
for(int i=idx;i<=jdx;i++)
{
    if(A[i] != ' ')res += A[i];
    else if(A[i] == ' ' || i == jdx)
    {
        if(res== "")
          continue;

        st.push(res);
        res = "";
    }

}

st.push(res);
A="";
while(!st.empty())
{
    A += st.top() + " ";
    st.pop();
}

return A.substr(0,A.size()-1);



    //ANOTHER ANSWER//

    // int i=0;
    // int j=A.length()-1;

    // while(A[i]==' ')
    // i++;

    // while(A[j]==' ')
    // j--;

    // int st=i,en=i;

    // while(i<=j)
    // {
    //     swap(A[i],A[j]);
    //     i++;
    //     j--;
    // }

    // for(int i=0;i<A.length();i++)
    // {
    //     while(A[i]==' ')
    //     {
    //         A[i]=A[i+1];
    //     }

    // }
    // while(en<A.length())
    // {
    //     while(A[en]!=' ' && en<A.length())
    //     {
    //         en++;
    //     }
    //     int y=en-1;
    //     while(st<=y)
    //     {
    //         swap(A[st],A[y]);
    //         st++;
    //         y--;

    //     }
    //     en++;
    //       st = en;
    // }
    // string ans;
    // for(int i=0;i<A.length()-1;i++)
    // {

    //     if(A[i]==' ' && A[i+1]==' ')
    //     continue;

    //     ans+=A[i];

    // }
    // return ans;


    //ANOTHER ANSWER//

    // vector<string>v;
    // int i=0;

    // while(i<A.length())
    // {   string s;
    //     while(A[i]!=' ' && i<A.length())
    //     {
    //         s+=A[i];
    //         i++;
    //     }
    //     v.push_back(s);
    //     s.clear();
    // }

    // reverse(v.begin(),v.end());
    // string ans;
    // for(int i=0;i<v.size();i++)
    // {
    //     ans+=v[i];
    //     if(i!=v.size()-1)
    //     ans+=' ';
    // }

    // return ans;
}

int main()
{

    string str;

    cin>>str;
      cout<<solve(str);
}
