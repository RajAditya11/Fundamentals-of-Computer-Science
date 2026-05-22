#include<bits/stdc++.h>

using namespace std;

//T.C : O(logn)

bool binary_Search( vector<int> nums , int key , int l , int r ){
    
    while( l <= r ){
        int mid = l + ( r - l )/2;

        if( nums[mid] == key ){
            return true;
        }

        if( nums[mid] > key ){
            r = mid -1;
        }else{
            l = mid + 1;
        }
    }

    return false;
}

int main(){

    vector<int> nums = { 1 , 3 , 6 , 8 , 9 , 12 , 23 , 34 , 45, 55 , 56 , 89 , 100 };

    if( binary_Search( nums , 55 , 0 , nums.size()-1 ) ){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found";
    }

    return 0;
}