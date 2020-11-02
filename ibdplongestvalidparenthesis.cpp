int Solution::longestValidParentheses(string A) {
    stack<int>s;
    int maxlen=0;
   s.push(-1);
    for(int i=0;i<A.length();i++)
    {
        if(i==0)
        s.push(i);
        else if(s.top()!=-1 && A[i]==')' && A[s.top()]=='(')
        {
            s.pop();
            maxlen=max(maxlen,i-s.top());
        }
        else
        s.push(i);

    }
    return maxlen;
}

