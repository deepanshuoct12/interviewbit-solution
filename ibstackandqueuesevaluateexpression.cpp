int Solution::evalRPN(vector<string> &A) {
    stack<int>s;
    for(int i=0;i<A.size();i++)
    {
         if(A[i]=="+"|| A[i]=="-" || A[i]=="*"|| A[i]=="/")
        {
            if(!s.empty())
            {
                int v1=s.top();
                s.pop();
                 int v2=s.top();
                 s.pop();
                 int val;
                 if(A[i]=="+")
                 val=v1+v2;
                 else if(A[i]=="*")
                 val=v1*v2;
                 else if(A[i]=="-")
                 val=v2-v1;
                 else if(A[i]=="/")
                 val=v2/v1;

                 s.push(val);
            }
        }

        //  else if(isdigit(A[i][A[i].length()-1]))
        //     s.push(stoi(A[i]));

        else
         s.push(stoi(A[i]));
      //  return 0;

    }

    return s.top();
}

