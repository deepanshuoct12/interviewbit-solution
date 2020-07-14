vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
int n = A.size();
vector<int> ans;
if(B >=n && n!=0)
{
ans.push_back(*max_element(A.begin(),A.end()));
return ans;
}
else if(B>=n && n == 0)
return ans;

deque<int> dq(B);

for(int i =0;i<B;i++)
{
    while(!dq.empty() && A[i] >= A[dq.back()])
        dq.pop_back();
    dq.push_back(i);
}

for(int i=B;i<n;i++)
{
    ans.push_back(A[dq.front()]);

    while(!dq.empty() && dq.front() <= i - B)
        dq.pop_front();

    while(!dq.empty() && A[i] >= A[dq.back()])
        dq.pop_back();

    dq.push_back(i);
}
ans.push_back(A[dq.front()]);
return ans;
}
// vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
//     deque<pair<int,int> >q;
//         vector<int>ans;
//   int m=INT_MIN;
//     if(B >=n && n!=0)
//       {
//         ans.push_back(*max_element(A.begin(),A.end()));
//           return ans;
//       }
//       else if(B>=n && n == 0)
//         return ans;

//     for(int i=0;i<B;i++){
//         // q.push_back(A[i]);
//         // m=max(m,A[i]);
//         if(q.empty())
//         q.push_back({A[i],A[i]});
//         else
//         {
//           if(A[i]>q.back().second)
//           q.push_back({A[i],A[i]});

//           else
//           q.push_back({A[i],q.back().second});
//         }
//     }
//      ans.push_back(m);
//     for(int i=B;i<A.size();i++){
//         ans.push_back(q.back().second);
//         //int m1=INT_MIN;
//         if(q.back().second==q.front){
//           q.pop_front();

//         }
//     //    q.push_back(A[i]);
//     //   deque <int> :: iterator it;
//     //   for (it = q.begin(); it != q.end(); ++it)
//     //       m1=max(m1,*it);
//     //       ans.push_back(m1);
//          if(A[i]>q.back().second)
//           q.push_back({A[i],A[i]});
//           else
//           q.push_back({A[i],q.back().second});
//     }

//     return ans;
// }

