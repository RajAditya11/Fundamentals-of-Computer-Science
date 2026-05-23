#include<bits/stdc++.h>
using namespace std;


int kadaneMinimum(vector<int>& nums , int length){
    int size = nums.size();

    int currSum = nums[0] , minSoFar = nums[0];

    for( int i = 1 ; i < size ; i++ ){
        
        currSum = min( nums[i] , nums[i] + currSum );

        minSoFar = min( currSum , minSoFar );
    }

    return minSoFar;
}


int main() {

    vector<int> array = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout<< kadaneMinimum(array , 2);

    return 0;
}