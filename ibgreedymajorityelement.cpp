int Solution::majorityElement(const vector<int> &A) {

    unordered_map<int,int>mp;
    for(auto x:A)
     {
         mp[x]++;

         if(mp[x]>A.size()/2)
         return x;
     }


}

