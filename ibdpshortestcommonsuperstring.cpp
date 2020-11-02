#include<bits/stdc++.h>
string superstring(string s1,string s2)
{
    int len1=s1.length(),len2=s2.length();
    int overlap1=0,overlap2=0;

    for(int len=1;len1-len>=0 && len<=len2;len++)
    {
        if(s1.substr(len1-len)==s2.substr(0,len))
        {
            overlap1=len;
        }
    }
     for(int len=1;len2-len>=0 && len<=len1;len++)
    {
        if(s2.substr(len2-len)==s1.substr(0,len))
        {
            overlap2=len;
        }
    }
  if(overlap1>overlap2)
     return (s1.substr(0,len1-overlap1)+s2);

     return (s2.substr(0,len2-overlap2)+s1);

}
int Solution::solve(vector<string> &A) {
    while(1)
    {
    int n=A.size();
    if(n==1)
    break;

  int maxlength=-1;
  vector<string>::iterator index1,index2;
    string newstr="";

    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            string s1=A[i];
            string s2=A[j];
            string merge=superstring(s1,s2);
            int savelength = s1.length()+s2.length()-merge.length();

            if(savelength>maxlength)
            {
                maxlength=savelength;
                index1=A.begin()+i;
                index2=A.begin()+j;
                newstr=merge;
            }
        }
    }
    A.erase(index1);
    A.insert(A.begin(),newstr);
    A.erase(index2);


    }
    return A[0].size();
}


