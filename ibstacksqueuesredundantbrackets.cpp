int Solution::braces(string A) {
    if(A.length()==0)
    return 0;

    stack<char>s;
    for(int i=0;i<A.length();i++){
        if(A[i]==')')
        {
            if(s.top()=='(')
             return 1;
            while(s.top()!='(')
            {
                s.pop();
            }
            s.pop();
        }
        else if(A[i]=='/' || A[i]=='*'|| A[i]=='+' || A[i]=='-' || A[i]=='(')
        s.push(A[i]);
    }
    return 0;
}

