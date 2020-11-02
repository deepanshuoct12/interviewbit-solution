bool compare(vector<int> a,vector<int> b)
{
    return b[0]>a[0];
}
int Solution::solve(vector<vector<int> > &A) {

    sort(A.begin(),A.end(),compare);

    priority_queue<int,vector<int>,greater<int> > pq;

    pq.push(A[0][1]);

    for(int i=1;i<A.size();i++)
    {
        if(A[i][0]>=pq.top())
        pq.pop();

        pq.push(A[i][1]);
    }
    return pq.size();

}

