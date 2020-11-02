int largestRectangleArea(vector<int> &A) {
    stack<int> s;

    int max_area = 0; // Initialize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar
      vector<int>hist=A;
      int n=A.size();
    int i = 0;
    while (i < n)
    {
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                i - s.top() - 1);
        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

int Solution::maximalRectangle(vector<vector<int> > &A) {
     int n=A.size();
     int m=A[0].size();
     int maxarea=0;
      vector<int>v(m,0);

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
           {
                if(A[i][j]==0)
                v[j]=0;
                else
                v[j]+=A[i][j];
            }
         int area = largestRectangleArea(v);
        if(area>maxarea)
        maxarea=area;
     }
    return maxarea;
}

