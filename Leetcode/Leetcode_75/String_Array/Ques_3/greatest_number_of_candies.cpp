#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
    int maxCandy = 0;
    for( int itr = 0 ; itr < candies.size() ; itr++ ){
        maxCandy = max( maxCandy , candies[itr] );
    }
    
    vector<bool> result( candies.size());

    for( int idx = 0 ; idx < result.size() ; idx++ ){
        if( candies[idx] + extraCandies >= maxCandy ){
            result[idx] = true;
        }else{
            result[idx] = false;
        }
    }

    return result;
}

int main(){

    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;

    vector<bool> result = kidsWithCandies( candies , extraCandies );

    for( int idx = 0 ; idx < result.size() ; idx++ ){
        cout<<result[idx]<<" ";
    }

    return 0;
}