#include<bits/stdc++.h>
using namespace std;

vector<int> gen_SuffixSum(const vector<int>& nums ){
    int size = nums.size();

    if( size == 0 ) return {};

    vector<int> suffixSum(size);

    // Suffix sum storing from 0 - n 
    suffixSum[0] = nums[size-1];
    int j = size - 2;

    for( int i = 1 ; i < size , j >= 0 ; i++ ){

        suffixSum[i] = suffixSum[i-1] + nums[j--];

    }


    // Suffix sum storing from n - 0
    suffixSum[size - 1] = nums[size - 1];
    j = size-2;

    for( int i = size-2; i > 0 , j >= 0  ; i-- ){
        suffixSum[i] = suffixSum[i+1] + nums[j--];
    }

    return suffixSum;
}



int main() {

    vector<int> array = {2, 4, 6, 8, 10};

    vector<int> suffix = gen_SuffixSum(array);

    cout << "Original Array:\n";
    for(int num : array) {
        cout << num << " ";
    }

    cout << "\n\nSuffix Sum Array:\n";
    for(int num : suffix) {
        cout << num << " ";
    }

    cout << "\n\n";

    return 0;
}