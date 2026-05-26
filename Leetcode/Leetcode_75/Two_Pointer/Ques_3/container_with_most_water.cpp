#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &heights)
{
    int l = 0, r = heights.size() - 1;

    int maximumArea = 0;

    while (l < r)
    {

        int width = (r - l);

        int height = min(heights[l], heights[r]);

        int currArea = width * height;

        maximumArea = max(maximumArea, currArea);

        if (heights[l] < heights[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    return maximumArea;
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    cout<<maxArea(height);

    return 0;
}