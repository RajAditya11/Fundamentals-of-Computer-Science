#include <bits/stdc++.h>
using namespace std;

int largestElement( vector<int>& nums , int largest , int curr ){
    //Base Case
    if( curr == nums.size() ) return largest;
    
    if( nums[curr] > largest ){
        largest = nums[curr];
    }

    return largestElement( nums , largest , ++curr );

}

int main(){
    vector<int> arr = { 1 , 2 , 7 , 12 , 2 , 34 , 56 , 78 , 89 , 78 , 67 , 23 , 45 };

    if( arr.size() == 1 ) return arr[0];

    int largest = largestElement( arr , arr[0] , 1 );

    cout<<"Largest Element is "<<largest;

    return 0;
}