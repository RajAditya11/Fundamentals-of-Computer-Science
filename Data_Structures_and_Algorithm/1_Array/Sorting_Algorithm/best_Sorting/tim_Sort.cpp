#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {5,21,7,23,19};

    stable_sort(arr.begin(), arr.end());

    for(int x : arr)
        cout << x << " ";

    return 0;
}