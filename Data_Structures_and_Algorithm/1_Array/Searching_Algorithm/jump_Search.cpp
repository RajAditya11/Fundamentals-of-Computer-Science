#include<bits/stdc++.h>

using namespace std;

//T.C : O(√n)

bool jump_Search( vector<int> nums , int key , int l , int r ){
    
    /* 
    the logic of jump search is to take sqrt(size) and make it as a block and 
    keep jumping ahead until you find the right range of block and perform a 
    linear search on that particular block.
    
    */
   int size = nums.size();

    // Block Size
    int jump = sqrt( size );

    int itr = 0 , prev = 0;

    while( itr < size && nums[itr] < key ){
        prev = itr;
        itr += jump;
    }

    //prevent out of bound error
    
    itr = min( itr , size);

    //Linear Search on the block
    for( int i = prev ; i <= itr ; i++ ){
        if( nums[i] == key ){
            return true;
        }
    }
    return false;
}

int main(){

    vector<int> nums = { 1 , 3 , 6 , 8 , 9 , 12 , 23 , 34 , 45, 55 , 56 , 89 , 100 };

    if( jump_Search( nums , 55 , 0 , nums.size()-1 ) ){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found";
    }

    return 0;
}