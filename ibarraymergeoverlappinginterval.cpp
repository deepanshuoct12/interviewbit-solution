 #include<bits/stdc++.h>

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval>ans;
    int n = A.size();

     if (n <= 0)
        return ans;

    // Create an empty stack of intervals
    stack<Interval> s;

    // sort the intervals in increasing order of start time
    sort(A.begin(), A.end(), compareInterval);

    // push the first interval to stack
    s.push(A[0]);

    // Start from the next interval and merge if necessary
    for (int i = 1 ; i < n; i++)
    {
        // get interval from stack top
        Interval top = s.top();

        // if current interval is not overlapping with stack top,
        // push it to the stack
        if (top.end < A[i].start)
            s.push(A[i]);

        // Otherwise update the ending time of top if ending of current
        // interval is more
        else if (top.end < A[i].end)
        {
            top.end = A[i].end;
            s.pop();
            s.push(top);
        }
    }

   while (!s.empty())
    {
        Interval t = s.top();
        ans.push_back(t);
       // cout << "[" << t.start << "," << t.end << "] ";
        s.pop();
    }

    sort(ans.begin(),ans.end(),compareInterval);

    return ans;
    /*
    vector<Interval>ans;

    if(A.size()==0)
    return ans;

    if(A.size()==1)
    return A;

    sort(A.begin(),A.end(),mycomp);

    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i].end>=A[i+1].start)
        {
            int st = A[i].start;
            int en = A[i].end;
            while((i<A.size()-1) && (en >=A[i+1].start))
            {
                i++;
                 en = max(en,A[i].end);
            }

           // en = max(en,A[i].end);
              Interval I;
            I.start = st;
            I.end = en;
            ans.push_back(I);
        }

        else
        {
            ans.push_back(A[i]);
        }
    }

    return ans;*/
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
int main() {

int n;
cin>>n;
vector<Interval> I(n);
for(int i=0;i<n;i++)
{

    int x,y;
    cin>>x>>y;
    I[i].start=x;
    I[i].end=y;
}
// Interval in;
// int s,e;
// cin>>s>>e;
// in.start=s;
// in.end=e;

  vector<Interval>ans = merge(I);

  for(auto x:ans)
   cout<<x.start<<" "<<x.end<<"\n";

	return 0;
}
