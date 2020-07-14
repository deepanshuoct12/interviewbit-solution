vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
     int s=0;
    int e=n-1;
    int ans=-1;
      vector<int>v;
    while(s<=e)
    {

        int mid=(s+e)/2;

        if(A[mid]==B)
        {
            ans=mid;
            e=mid-1;   // we do e=mid-1 as we want to search in left part for first occurance
        }

        else if(A[mid]>B)
        {
            e=mid-1;
        }

        else{
            s=mid+1;
        }
    }
    v.push_back(ans);
    //
      s=0;
     e=n-1;
     ans=-1;
     while(s<=e)
    {
        int mid=(s+e)/2;
        if(A[mid]==B)
        {
            ans=mid;
            s=mid+1;  // to find last occurance of key
        }
        else if(A[mid]>B)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
      v.push_back(ans);

      return v;

}


