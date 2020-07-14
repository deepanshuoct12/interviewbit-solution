vector<int> Solution::nextGreater(vector<int> &A) {
    stack<int>s;
    vector<int>ans;
    for(int i=A.size()-1;i>=0;i--)
    {
        while(!s.empty() && A[i]>=s.top())
        {
            s.pop();
        }
        if(s.empty())
        ans.push_back(-1);
        else
        ans.push_back(s.top());

        s.push(A[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

