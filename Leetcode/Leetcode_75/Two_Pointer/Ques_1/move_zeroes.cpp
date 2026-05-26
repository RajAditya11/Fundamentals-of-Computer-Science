#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int zIndex = 0;

    for (int idx = 0; idx < nums.size(); idx++)
    {

        if (nums[idx] != 0)
        {
            nums[zIndex++] = nums[idx];
        }
    }

    while (zIndex < nums.size())
    {
        nums[zIndex++] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}