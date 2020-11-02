// vector<int> Solution::order(vector<int> &A, vector<int> &B) {
//     vector<pair<int,int> >v(A.size());
//     for(int i=0;i<A.size();i++)
//     {
//         v[i].first=A[i];
//         v[i].second=B[i];
//     }
//     sort(v.begin(),v.end());

//     unordered_map<int,int>mp;
//     vector<int>ans;

//     for(int i=0;i<v.size();i++)
//     {   int count=0;

//         for(int j=0;j<A.size();j++)
//         {

//             if(mp.find(A[j])!=mp.end())
//             {
//                 count++;
//                 continue;
//             }
//             if(A[j]>v[i].first && count<v[i].second)
//             {
//                 ans.push_back(A[j]);

//                 mp[A[j]]++;
//                 count++;
//             }
//         }
//         if(mp.find(v[i].first)==mp.end())
//          ans.push_back(v[i].first);

//     }
//     return ans;
// }
vector<int> Solution::order(vector<int> & arr, vector<int> & heights) {
    vector<pair<int, int> > a;
    for(int i = 0; i < arr.size(); i++){
        pair<int, int> temp = {arr[i], heights[i]};
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    arr.clear();
    for(int i = a.size()-1; i >=0; i--){
        arr.insert(arr.begin()+ a[i].second, a[i].first);
        // for(auto x:arr)
        // cout<<x<<" ";
        // cout<<"\n";
    }
    return arr;
}
