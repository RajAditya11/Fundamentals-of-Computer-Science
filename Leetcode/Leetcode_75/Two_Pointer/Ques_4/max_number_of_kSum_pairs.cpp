#include <bits/stdc++.h>
using namespace std;

int maxOperations(vector<int> &nums, int k)
{
    unordered_map<int, int> map;
    int count = 0;

    for (int val : nums)
    {
        int diff = (k - val);

        if (map[diff] > 0)
        {
            count++;
            map[diff]--;
        }
        else
        {
            map[val]++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    int k = 5;

    maxOperations( nums , k );

    return 0;
}