int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {

     int sumGas = 0;
            int sumCost = 0;
            int start = 0;
            int tank = 0;
            for (int i = 0; i <A.size(); i++) {
                sumGas += A[i];
                sumCost += B[i];
                tank += A[i] - B[i];
                if (tank < 0) {
                    start = i + 1;
                    tank = 0;
                }


            }
            cout<<"\n";
            if (sumGas < sumCost) {
                return -1;
            } else {
                return start;
            }
    // int start=0,gain=0,sum=0;
    // for(int i=0;i<A.size();i++){

    //     gain+=A[i]-B[i];
    //     if(gain<0)
    //     {
    //         start=i+1;
    //         gain=0;
    //     }

    //
    //     // int rem=(A[i]-B[i]);

    //     // if(gain>=0)
    //     // {
    //     //     gain+=rem;
    //     // }
    //     // else
    //     // {
    //     //     gain=rem;
    //     //     start=i;
    //     // }
    //      cout<<gain<<" ";
    //     // sum+=rem;
    // }
    // cout<<"\n";
    // if(gain>=0)
    // return start;

    // return -1;
}

