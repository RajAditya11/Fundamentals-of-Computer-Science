#include<bits/stdc++.h>

using namespace std;

void bubbleSort( vector<int>& nums){

    for( int i = 0 ; i < nums.size(); i++ ){
        int max = nums[i];

        for( int j = i+1; j < nums.size(); j++ ){
            if( nums[i] > nums[j] ){
                swap( nums[i] , nums[j] );
            }
        }
    }
}

bool isSorted( vector<int>& nums){
    int prev = nums[0];
    for( int i = 1 ; i < nums.size() ; i++ ){
        if( nums[i] < prev ){
            return false;
        }else{
            prev = nums[i];
        }
    }
}

int main(){

}