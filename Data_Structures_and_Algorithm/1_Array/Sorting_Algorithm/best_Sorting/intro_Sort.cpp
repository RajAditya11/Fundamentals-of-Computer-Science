#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {5,2,9,1,5,6};

    sort(arr.begin(), arr.end());

    for(int x : arr)
        cout << x << " ";

    return 0;
}