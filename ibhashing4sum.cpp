// vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {

//     vector< vector<int> >ans;
//      sort(A.begin(),A.end());
//      map<vector<int>,int > mp;
//     int n=A.size();
//     for(int i=0;i<n-1;i++)
//     {
//     for(int j=i+1;j<n;j++)
//     {
//       // int j=i+1;
//         int k=0,l=A.size()-1;
//         int sum=B-(A[i]+A[j]);
//         vector<int>temp;

//         temp.push_back(A[i]);
//         temp.push_back(A[j]);

//       // cout<<temp[0]<<":"<<temp[1]<<"\n";
//         while(k<l)
//         {  //  cout<<k<<"::"<<l<<"\n";
//           if(k==i || k==j)
//             {
//                 k++;
//                 continue;
//             }
//             if(l==i || l==j)
//             {
//                 l--;
//                 continue;
//             }

//           if(A[k]+A[l]<sum)
//           k++;
//           else if(A[k]+A[l]>sum)
//           l--;
//           else if((A[k]+A[l])==sum)
//           {
//               temp.push_back(A[k]);
//               temp.push_back(A[l]);
//               break;
//           }
//         }
//         sort(temp.begin(),temp.end());

//         if((temp.size()==4) && (mp.find(temp)==mp.end()) )
//         {
//             ans.push_back(temp);
//             mp[temp]=1;
//         }

//         temp.clear();
//     }

//     }
//     sort(ans.begin(),ans.end());
//     return ans;
//     // vector<int>temp;
//     // vector<vector<int> >ans;
//     // int n=A.size();
//     // unordered_map<int,pair<int,int> >mp;
//     // for(int i=0;i<n-1;i++)
//     // {
//     //     for(int j=0;j<n;j++)
//     //     {
//     //         if(i==j)
//     //         continue;

//     //         if(mp.find(A[i]+A[j])!=mp.end())
//     //         {
//     //             temp.push_back(A[i]);
//     //             temp.push_back(A[j]);
//     //             temp.push_back( mp[A[i]+A[j]].first );
//     //             temp.push_back( mp[A[i]+A[j]].second );
//     //             sort(temp.begin(),temp.end());
//     //             ans.push_back(temp);
//     //         }
//     //         else
//     //         mp.insert( {B-(A[i]+A[j]) , make_pair(A[i],A[j])} );
//     //       // mp[B-(A[i]+A[j])]=true;
//     //     }
//     // }
//     // return ans;

// }
vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    map<vector<int>,int>mp;
    sort(A.begin(),A.end());
    int n = A.size();
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int a = A[i];
            int b =A[j];
            int start = j+1;
            int end = n-1;
            while(start<end){
                int sum = a+b+A[start]+A[end];
                if(sum==B){
                    vector<int>temp;
                    temp.push_back(a);
                    temp.push_back(b);
                    temp.push_back(A[start]);
                    temp.push_back(A[end]);
                    if(mp.find(temp)==mp.end()){
                        mp[temp] =1;
                    }
                    start++;
                    end--;
                }
                else if(sum>B){
                    end--;
                }
                else{
                    start++;
                }

            }
        }

    }
    vector<vector<int>>result;
    for(auto it:mp){
        result.push_back(it.first);
    }
    return result;
}
