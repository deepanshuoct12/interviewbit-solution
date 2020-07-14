#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > Solution::threeSum(vector<int> &A) {

    int n=A.size();
vector<vector<int>> v;

long long sum=0;

sort(A.begin(),A.end());

for(int i=0;i<n-2;i++){

    int start=i+1,end=n-1;

    while(start<end){

        sum=(long long )(A[i])+(A[start])+(A[end]);
        if(sum==0){
        v.push_back({A[i],A[start],A[end]});
        start++;
        end--;
         }
        else if(sum>0)
        end--;
        else
        start++;
}
}
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());

return v;

    // vector<vector<int> >ans;
    // sort(A.begin(),A.end());

    // for(int i=0;i<A.size()-2;i++)
    // {

    //     int ptr1=i+1,ptr2=A.size()-1;
    //     vector<int>v(3);

    //     while(ptr1<ptr2){
    //         int sum = A[i]+A[ptr1]+A[ptr2];
    //         if(sum==0)
    //         {
    //             v[0]=A[i];
    //             v[1]=A[ptr1];
    //             v[2]=A[ptr2];
    //             ans.push_back(v);
    //             ptr1++;
    //             ptr2--;
    //         }

    //         else if(sum>0)
    //         ptr2--;

    //         else
    //         ptr1++;
    //     }
    // }
    // sort(ans.begin(),ans.end());
    // ans.erase(unique(ans.begin(),ans.end()), ans.end());
    // return ans;

}


    vector<vector<int> >ans;
    sort(A.begin(),A.end());

    for(int i=0;i<A.size()-2;i++)
    {

        int ptr1=i+1,ptr2=A.size()-1;
        vector<int>v;

        while(ptr1<ptr2){
            int sum = A[i]+A[ptr1]+A[ptr2];
            if(sum==0)
            {
                v[0]=A[i];
                v[1]=A[ptr1];
                v[2]=A[ptr2];
                cout<<v[0]<<":"<<v[1]<<":"<<v[2]<<"\n";
                 sort(v.begin(),v.end());
                 ans.push_back(v);
                 continue;
            }

            else if(sum>0)
            ptr2--;

            else
            ptr1++;
        }
    }

    	for(int i=0;i<ans.size();i++){
	    for(int j=0;j<ans[i].size();j++)
	     cout<<ans[i][j]<<" ";
	    cout<<"\n";

	}
    return ans;

}

int main() {
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	cin>>v[i];

	vector<vector<int> > ans = threeSum(v);

	for(int i=0;i<ans.size();i++){
	    for(int j=0;j<ans[i].size();j++)
	    cout<<ans[i][j]<<" ";

	    cout<<"\n";

	}
	return 0;
}
