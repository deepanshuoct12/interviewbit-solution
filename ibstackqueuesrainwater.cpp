int Solution::trap(const vector<int> &A) {
    int n=A.size();
    if(n==0)
    return 0;
     // left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    vector<int> left(n);

    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    vector<int> right(n);

    // Initialize result
    int water = 0;

    // Fill left array
    left[0] = A[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], A[i]);

    // Fill right array
    right[n - 1] = A[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], A[i]);

    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - A[i];

    return water;
    // stack<pair<int,int> >s1,s2;
    // for(int i=A.size()-1;i>=1;i--)
    // {
    //     int x=A[i];
    //     if(s2.empty())
    //       s2.push({x,x});

    //     else
    //     {
    //     if(x>s2.top().second)
    //         s2.push({x,x});
    //     else
    //         s2.push({x,s2.top().second});
    //     }
    // }

    // int water=0;
    // int x=0;
    // s1.push({0,0});
    // for(int i=0;i<A.size();i++){
    //     int val=min(s1.top().second,s2.top().second)-x;
    //     if(val>=0)
    //     water+=val;
    //     s2.pop();
    //       x=A[i];
    //       if(x>s1.top().second)
    //         s1.push({x,x});
    //       else
    //         s1.push({x,s1.top().second});


    // }
    // return water;
}
/*
// C++ program to find maximum amount of water that can
// be trapped within given set of bars.
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int findWater(int arr[], int n)
{
	// initialize output
	int result = 0;

	// maximum element on left and right
	int left_max = 0, right_max = 0;

	// indices to traverse the array
	int lo = 0, hi = n - 1;

	while (lo <= hi) {
		if (arr[lo] < arr[hi]) {
			if (arr[lo] > left_max)
				// update max in left
				left_max = arr[lo];
			else
				// water on curr element = max - curr
				result += left_max - arr[lo];
			lo++;
		}
		else {
			if (arr[hi] > right_max)
				// update right maximum
				right_max = arr[hi];
			else
				result += right_max - arr[hi];
			hi--;
		}
	}

	return result;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n);
}

// This code is contributed by Aditi Sharma

*/
