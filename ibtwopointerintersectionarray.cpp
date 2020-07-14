vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

  unordered_map<int,int>mp;
  vector<int>ans;

  if(A.size()==0 || B.size()==0)
  return ans;

  for(int i=0;i<A.size();i++)
  {
      mp[A[i]]++;
  }

   for(int i=0;i<B.size();i++)
  {
     if(mp[B[i]])
     {
         ans.push_back(B[i]);
         mp[B[i]]--;
     }
  }
  return ans;

  /*
  vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {

vector<int>c;
int i=0,j=0;
while(i<a.size()&&j<b.size())
{
    if(a[i]==b[j]){
    c.push_back(a[i++]);
    j++;
    }
    else if(a[i]<b[j])
    i++;
    else
    j++;
}
return c;
}*/
    // vector<int>ans;

    // if(A[0]<B[0])
    // {
    //     int i=0,j=0;
    //     while(i<A.size()){
    //         if(A[i]==B[j])
    //         {
    //             ans.push_back(A[i]);
    //             i++;
    //             j++;
    //         }
    //         else
    //         i++;
    //     }
    // }

    // else {
    //     int i=0,j=0;
    //     while(i<B.size()){
    //         if(B[i]==A[j])
    //         {
    //             ans.push_back(B[i]);
    //             i++;
    //             j++;
    //         }
    //         else
    //         i++;
    //     }
    // }

  //  return ans;
}

