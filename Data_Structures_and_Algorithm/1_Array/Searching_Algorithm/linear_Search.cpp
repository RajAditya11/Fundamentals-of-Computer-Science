#include<bits/stdc++.h>

using namespace std;

//T.C : O(n)

bool linear_Search( vector<int> nums , int key ){
    
   int size = nums.size();

   for( int i = 0 ; i < size ; i++ ){
      if( nums[i] == key ) return true;
   }
   return false;
}

int main(){

    vector<int> nums = { 1 , 3 , 6 , 8 , 9 , 12 , 23 , 34 , 45, 55 , 56 , 89 , 100 };

    if( linear_Search( nums , 55 ) ){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found";
    }

    return 0;
}