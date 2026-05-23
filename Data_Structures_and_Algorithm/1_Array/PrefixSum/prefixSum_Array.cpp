#include<bits/stdc++.h>
using namespace std;

vector<int> gen_PrefixSum(const vector<int>& nums ){
    int size = nums.size();

    if( size == 0 ) return {};

    vector<int> prefixSum(size);


    //Avoid out of bound error.
    prefixSum[0] = nums[0];

    int i = 1;
    while( i < size ){
        prefixSum[i] = prefixSum[i-1] + nums[i];
        i++;
    }

    return prefixSum;
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
         << right << " = ";

    return 0;
}