#include<bits/stdc++.h>
using namespace std;

vector<int> gen_PrefixSum(const vector<int>& nums) {

    int size = nums.size();

    // Edge case
    if(size == 0) return {};

    vector<int> prefixSum(size);

    // First element remains same
    prefixSum[0] = nums[0];

    // Build prefix sum array
    for(int i = 1; i < size; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    return prefixSum;
}

int rangeSum( vector<int>& prefix , int left , int right ){
    // We already generated the prefix sum so simply call it for left == 0 so right will be range sum itself.
    if( left == 0 ) return prefix[right];

    else{
        return prefix[right] - prefix[left-1];
    }
}


int main() {

    vector<int> array = {2, 4, 6, 8, 10};

    vector<int> prefix = gen_PrefixSum(array);

    cout << "Original Array:\n";
    for(int num : array) {
        cout << num << " ";
    }

    cout << "\n\nPrefix Sum Array:\n";
    for(int num : prefix) {
        cout << num << " ";
    }

    cout << "\n\n";

    int left = 1;
    int right = 3;

    cout << "Range Sum from index "
         << left << " to "
         << right << " = "
         << rangeSum(prefix, left, right);

    return 0;
}