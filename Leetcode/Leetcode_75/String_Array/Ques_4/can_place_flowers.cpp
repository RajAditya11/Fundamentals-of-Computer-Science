#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    if (n == 0)
        return true;

    int size = flowerbed.size();
    int placed = 0;

    for (int i = 0; i < size; i++)
    {
        if (flowerbed[i] == 0)
        {
            bool leftEmpty = (i == 0) || flowerbed[i - 1] == 0;
            bool rightEmpty = (i == size - 1) || flowerbed[i + 1] == 0;

            if (leftEmpty && rightEmpty)
            {
                flowerbed[i] = 1;
                placed++;

                if ( placed >= n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{

    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    bool state = canPlaceFlowers(flowerbed, n);

    return 0;
}