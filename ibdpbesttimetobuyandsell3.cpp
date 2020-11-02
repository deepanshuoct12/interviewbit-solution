int Solution::maxProfit(const vector<int> &A) {

    int fb=INT_MIN,fs=0;
    int sb=INT_MIN,ss=0;
    for(int i=0;i<A.size();i++)
    {
        fb=max(fb,-A[i]);
        fs=max(fs,fb+A[i]);

        sb=max(sb,fs-A[i]);
        ss=max(ss,sb+A[i]);
       // cout<<fb<<":"<<fs<<"  "<<sb<<":"<<ss<<"\n";
    }
    return ss;
}

