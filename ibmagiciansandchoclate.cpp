#define mod 1000000007
int Solution::nchoc(int A, vector<int> &B) {

    priority_queue<long long int>pq;
    for(auto x:B)
    pq.push(x);
    long long int ans=0;
    while(A--)
    {   long long int val=pq.top();
         pq.pop();
        ans=(ans%mod+val%mod)%mod;
        val=val/2;
        pq.push(val);

    }
    return int(ans%mod);
}

