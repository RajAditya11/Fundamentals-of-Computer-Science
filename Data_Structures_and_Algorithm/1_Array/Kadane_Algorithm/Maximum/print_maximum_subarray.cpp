/*
Print the maximum subarray too. with the maximum subarray sum.


*/

#include<bits/stdc++.h>
using namespace std;

int kadaneSubarray(const vector<int>& nums){
    int size = nums.size();

    if( size == 0 ){
        throw runtime_error("There is no element in array.");
    }


    int currSum = nums[0] , maxSoFar = nums[0];

    int start = 0 , end = 0;
    int l = 0, r = 0;

    for( int i = 1 ; i < size ; i++ ){
        
        if( nums[i] > currSum + nums[i] ){
            currSum = nums[i];
            start = i;
            end = i;
        }else{
            currSum = currSum + nums[i];
            end = i; 
        }

        if( currSum > maxSoFar ){
            maxSoFar = currSum;
            l = start;
            r = end;
        }
    }

    cout<<"\nMaximum Subarray :";
    while( l <= r ){
        cout<<nums[l++]<<" ";
    }
    cout<<endl;

    return maxSoFar;
}


int main() {

    vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout<< kadaneSubarray(array);

    return 0;
}