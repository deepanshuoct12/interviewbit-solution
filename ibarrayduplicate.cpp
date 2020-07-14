int Solution::repeatedNumber(const vector<int> &A) {
//  map<int,int>m;
// int n=A.size()-1;
// int s=sqrt(n);
// int num=n/s+1;
// int f=num-1;
// for(auto i:A){
//     m[(i-1)/s]++;
//     if(m[(i-1)/s]>s)f=(i-1)/s;
// }
// m.clear();
// for(auto i:A)
//     if(((i-1)/s)==f)m[i]++;
// for(auto i:m)
//     if(i.second>1)return i.first;
    // Size of blocks except the
    // // last block is sq
    int n = A.size();
    int sq = sqrt(n);

    // Number of blocks to incorporate 1 to
    // n values blocks are numbered from 0
    // to range-1 (both included)
    int range = (n / sq) + 1;

    // Count array maintains the count for
    // all blocks
    int count[range] = {0};

    // Traversing the read only array and
    // updating count
    for (int i = 0; i <= n; i++)
    {
        // arr[i] belongs to block number
        // (arr[i]-1)/sq i is considered
        // to start from 0
        count[(A[i] - 1) / sq]++;
    }

    // The selected_block is set to last
    // block by default. Rest of the blocks
    // are checked
    int selected_block = range - 1;
//     for (int i = 0; i < range - 1; i++)
    {
        if (count[i] > sq)
        {
            selected_block = i;
            break;
        }
    }

    // after finding block with size > sq
    // method of hashing is used to find
    // the element repeating in this block
    unordered_map<int, int> m;
    for (int i = 0; i <= n; i++)
    {
        // checks if the element belongs to the
        // selected_block
        if ( ((selected_block * sq) < A[i]) &&
                (A[i] <= ((selected_block + 1) * sq)))
        {
            m[A[i]]++;

            // repeating element found
            if (m[A[i]] > 1)
                return A[i];
        }
    }

  return -1;
    //return



    // int val=-1;
    // int n = A.size();
    // vector<int>arr(n);
    // for(int i=0;i<n;i++)
    //   arr[i]=A[i];

    // for(int i=0;i<n;i++)
    // {
    //     if( arr[abs(arr[i])] >=0)
    //     {
    //         arr[abs(arr[i])]= -arr[abs(arr[i])];
    //     }
    //     else
    //     {
    //         val = abs(arr[i]);
    //         break;
    //     }
    // }

    // return val;
    // // unordered_map<int,int>mp;
    // // int val = -1;
    // for(int i=0;i<A.size();i++)
    // {
    //     if(mp.count(A[i]))
    //     {
    //         val = A[i];
    //       break;
    //     }

    //     else
    //     mp[A[i]]++;
    // }

    // return val;
}

