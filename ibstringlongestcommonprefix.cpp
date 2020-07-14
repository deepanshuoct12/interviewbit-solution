string Solution::longestCommonPrefix(vector<string> &A)
{
string ans="";
sort(A.begin(),A.end());
int n=A.size();
string s=A[n-1];

    for(int j=0;j<A[0].size();j++)
    {
        if(A[0][j]==A[n-1][j])
        ans+=A[n-1][j];
        else
        break;
    }

return ans;
}
// string Solution::longestCommonPrefix(vector<string> &A) {
//     string s;

//     if(A.size()==0)
//         return s;

//     if(A.size()==1)
//     return A[0];

//     int idx=0;
//     while(A[0][idx]==A[1][idx])
//     {
//         s+=A[0][idx];
//         idx++;
//     }

//     for(int i=2;i<A.size();i++)
//     {
//         string temp;
//         int j=0;
//         while(s[j]==A[i][j])
//         {
//             temp+=A[i][j];
//             j++;
//         }

//         if(temp!=s)
//         s=temp;

//     }
//     return s;
// }

