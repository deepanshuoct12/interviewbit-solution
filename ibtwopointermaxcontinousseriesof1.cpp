vector<int> Solution::maxone(vector<int> &A, int B) {
    vector<int>ans;
    int  n = A.size();
    int m=B;

    if(n==0)
    {
        ans.push_back(0);
        return ans;
    }

    // Left and right indexes of current window
    int wL = 0, wR = 0;

    // Left index and size of the widest window
    int bestL = 0, bestWindow = 0;

    // Count of zeroes in current window
    int zeroCount = 0;

    // While right boundary of current window doesn't cross
    // right end
    while (wR < n)
    {
        // If zero count of current window is less than m,
        // widen the window toward right
        if (zeroCount <= m)
        {
            if (A[wR] == 0)
              zeroCount++;
            wR++;
        }

        // If zero count of current window is more than m,
        // reduce the window from left
        if (zeroCount > m)
        {
            if (A[wL] == 0)
              zeroCount--;
            wL++;
        }

        // Updqate widest window if this window size is more
        if ((wR-wL > bestWindow) && (zeroCount<=m))
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }

    // Print positions of zeroes in the widest window
    for (int i=bestL; i<bestL+bestWindow; i++)
    {

           ans.push_back(i);
    }

    return ans;
}

