#include<bits/stdc++.h>
using namespace std;

// T.C : O(log₃ n)

bool ternary_Search( vector<int> nums , int key , int l , int r ){
    
    /* 
    the logic of ternary search is similar to the binary search except with 2 
    partitioning point than 1.
    
    */

    while( l <= r ){

        int leftMid = l + ( r - l )/3;
        int rightMid = r - ( r - l )/3;


        if( nums[leftMid] == key ){
            return true;
        }

        if( nums[rightMid] == key ){
            return true;
        }

        if( key < nums[leftMid] ){
            r = leftMid - 1;
        }

        else if( key > nums[rightMid] ){
            l = rightMid + 1;
        }

        else{
            l = leftMid + 1;
            r = rightMid - 1;
        }
    }

}

int main(){

    vector<int> nums = { 1 , 3 , 6 , 8 , 9 , 12 , 23 , 34 , 45, 55 , 56 , 89 , 100 };

    if( ternary_Search( nums , 55 , 0 , nums.size()-1 ) ){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found";
    }

    return 0;
}