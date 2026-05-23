#include<bits/stdc++.h>
using namespace std;

/*

Types of problems solved using Monotonic Stack:

- Previous Smaller Element
- Next Smaller Element
- Previous Greater Element
- Next Greater Element

Time Complexity  : O(N)
Space Complexity : O(N)

*/

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    unordered_map<int, int> ng;   // stores next greater of each element
    stack<int> st;

    // Process nums2
    for (int num : nums2) {

        // If current number is greater than stack top,
        // then current number becomes next greater
        while (!st.empty() && st.top() < num) {
            ng[st.top()] = num;
            st.pop();
        }

        st.push(num);
    }

    // Build result for nums1
    vector<int> res;

    for (int num : nums1) {

        if (ng.count(num)) {
            res.push_back(ng[num]);
        } else {
            res.push_back(-1);
        }
    }

    return res;
}

int main() {

    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}