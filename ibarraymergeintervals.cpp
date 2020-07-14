 #include<bits/stdc++.h>
using namespace std;

struct Interval {
      int start;
      int end;
     Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
 };

 #include<bits/stdc++.h>
vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    int st=0;
    int en=0;

    if(intervals.size()==0)
      {
           intervals.push_back(newInterval);

        return intervals;
      }


    if(newInterval.end < intervals[0].start)
    {
        vector<Interval>answer;
        answer.push_back(newInterval);

        for(auto x:intervals)
        answer.push_back(x);

        return answer;
    }

    if(newInterval.start > intervals[intervals.size()-1].end)
    {
        intervals.push_back(newInterval);

        return intervals;
    }
    int f1=1,f2=1;;
    for(int i=0;i<intervals.size();i++)
    {
        if(newInterval.start<=intervals[i].end && f1)
        {
            if(newInterval.start<intervals[i].start)
            st=newInterval.start;
            else
            st=intervals[i].start;

             f1=0;
        }
        if(newInterval.end<=intervals[i].end && f2)
        {
          if(newInterval.end<intervals[i].start)
            en=newInterval.end;
            else
            en=intervals[i].end;

            f2=0;
        }
    }

    if(en==0)
    en=newInterval.end;

    vector<Interval>ans;
    int f=1;
    for(int i=0;i<intervals.size();i++)
    {
        if(intervals[i].start>=st && f)
        {
            Interval I;
            I.start = st;
            I.end = en;
            ans.push_back(I);
            f=0;
            if(en<intervals[i].end)
            {
                ans.push_back(intervals[i]);
            }
            continue;
        }

        else if(intervals[i].start>=st && intervals[i].end<=en)
        continue;

        else
        ans.push_back(intervals[i]);
    }

    return ans;


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
Interval in;
int s,e;
cin>>s>>e;
in.start=s;
in.end=e;

  vector<Interval>ans = insert(I,in);

  for(auto x:ans)
   cout<<x.start<<" "<<x.end<<"\n";

	return 0;
}
