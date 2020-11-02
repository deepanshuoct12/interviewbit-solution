// int dx[]={1,-1,0,0};
// int dy[]={0,0,1,-1};

// bool isvalid(int i,int j,int n,int m)
// {
//     if(i<0 || i>=n || j<0 || j>=m)
//     return 0;
//     return 1;
// }
// bool bfs(vector<string> &A,string B,int i,int j,int st)
// {
//     queue<pair<int,int> >q;
//     q.push(make_pair(i,j));
//     st++;
//     int n=A.size();
//     int m=A[0].length();
// //    set<pair<int,int> > s;
//   // s.insert(make_pair(i,j));
//     while(!q.empty())
//     {
//         pair<int,int> curr = q.front();
//         q.pop();

//       if(st==B.length()-1 && A[curr.first][curr.second]==B[st])
//         return true;
//          cout<<st<<"::"<<B.length()-1<<" "<<curr.first<<","<<curr.second<<"\n";

//     //    A[curr.first][curr.second]='$';
//       //  s.insert(make_pair(curr.first,curr.second));

//         for(int i=0;i<4;i++)
//         {
//             int x=curr.first+dx[i];
//             int y=curr.second+dy[i];
//             if(isvalid(x,y,n,m) && A[x][y]==B[st])// && s.find(make_pair(x,y))==s.end())//&& A[x][y]!='$')
//             {
//                 q.push(make_pair(x,y));
//               // s.insert(make_pair(x,y));
//               // A[x][y]='$';
//             }
//         }
//         if(q.empty())
//         return false;

//         if(st<B.length()-1)
//         st++;
//     }

//       for(int i=0;i<A.size();i++)
//     {
//         for(int j=0;j<A[0].length();j++)
//         {
//           cout<<A[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return false;
// }

// int Solution::exist(vector<string> &A, string B) {

//     for(int i=0;i<A.size();i++)
//     {
//         for(int j=0;j<A[0].length();j++)
//         {
//             if(A[i][j]==B[0])
//             {
//                 bool ans=bfs(A,B,i,j,0);
//                 cout<<ans<<":"<<"\n";
//                  if(ans==true)
//                   return 1;
//             }
//         }
//     }

//     return 0;
// }
bool dfs(int i,int j, string &b,vector<string> &a, int idx)
{
    if(idx == b.length()) return 1;
    if(i<0 || j<0 || i>=a.size() || j>=a[0].size() || a[i][j] != b[idx]) return 0;
    ++idx;
    return dfs(i+1,j,b,a,idx) || dfs(i,j+1,b,a,idx)||dfs(i-1,j,b,a,idx) || dfs(i,j-1,b,a,idx);
}

int Solution::exist(vector<string> &a, string b) {
    if(b.empty()) return 1;
    if(a.empty()) return 0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a[0].size(); j++)
        {
            if(a[i][j] == b[0] && dfs(i,j,b,a,0))
            {
                return 1;
            }

        }
    }
    return 0;
}
