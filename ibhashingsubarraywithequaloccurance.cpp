int Solution::solve(vector<int> &A, int B, int C) {
int n=A.size();
	int countX[n], countY[n];
   int x=B,y=C;
	map<int, int> m; // To store counts of same diffs

      vector<int>arr=A;
	// Count occurrences of x and y
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			if (i != 0)
				countX[i] = countX[i - 1] + 1;
			else
				countX[i] = 1;
		} else {
			if (i != 0)
				countX[i] = countX[i - 1];
			else
				countX[i] = 0;
		}
		if (arr[i] == y) {
			if (i != 0)
				countY[i] = countY[i - 1] + 1;
			else
				countY[i] = 1;
		} else {
			if (i != 0)
				countY[i] = countY[i - 1];
			else
				countY[i] = 0;
		}

		// Increment count of current
		m[countX[i] - countY[i]]++;
	}

	// Traverse map and commute result.
	int result = m[0];
	for (auto it = m.begin(); it != m.end(); it++)
		result = result + ((it->second) * ((it->second) - 1)) / 2;

	return (result);


//   int n=A.size();
//   vector<int>c(n);
//     vector<int>b(n);
//     map<int,int>mp;

//     for(int i=0;i<n;i++){

//         if(A[i]==B)
//         {   if(i!=0)
//             b[i]+=b[i-1];
//             else
//             b[i]=1;
//         }
//         else
//         {
//             if(i!=0)
//             b[i]=b[i-1];
//             else
//             b[i]=0;
//         }
//          if(A[i]==C)
//         {   if(i!=0)
//             c[i]+=c[i-1];
//             else
//             c[i]=1;
//         }
//         else
//         {
//             if(i!=0)
//             c[i]=c[i-1];
//             else
//             c[i]=0;
//         }

//         mp[b[i]-c[i]]++;
//     }

//   int result = mp[0];
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         result = result + ((it->second) * ((it->second) - 1)) / 2;
//     }
//     return result;
}

