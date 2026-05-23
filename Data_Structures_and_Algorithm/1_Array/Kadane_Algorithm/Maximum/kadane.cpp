#include<bits/stdc++.h>
using namespace std;

/*
Kadane Algorithm is used to find the minimum/maximum sum contiguous subarray.

which is a continuos pick whose sum would be maximum 


Key Takeaway :

At every point:
Should previous state be extended
or discarded?

This idea appears everywhere:

DP
greedy
distributed systems
caching
streaming analytics
stock trading systems

It can also  be understood as maximum difference b/w prefixSum Array.


*/

int kadane(vector<int>& nums){
    int size = nums.size();
    int currSum = nums[0] , maxSoFar = nums[0];

    for( int i = 1 ; i < size ; i++ ){
        
        currSum = max( nums[i] , nums[i] + currSum );

        maxSoFar = max( currSum , maxSoFar );
    }

    return maxSoFar;
}


int main() {

    vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout<< kadane(array);

    return 0;
}