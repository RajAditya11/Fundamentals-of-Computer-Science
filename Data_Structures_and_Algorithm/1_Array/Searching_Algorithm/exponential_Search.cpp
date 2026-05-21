#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int key) {

    while(l <= r) {

        int mid = l + (r - l) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}


//T.C : O(log n)

int exponentialSearch(int arr[], int n, int key) {

    /*
       logic here is to keep moving forward exponentially ( i *= 2 ) and 
       keeping track of arr[i] <= key.

       once this loop is ended.

       run binary_Search( arr , i/2 , min( i , n -1 ) , key );
    */

    if(arr[0] == key)
        return 0;

    int i = 1;

    while(i < n && arr[i] <= key)
        i *= 2;

    return binarySearch(
        arr,
        i / 2,
        min(i, n - 1),
        key
    );
}

int main() {

    int arr[] = {
        2,4,6,8,10,
        12,14,16,18
    };

    int n = 9;

    cout << exponentialSearch(arr, n, 14);
}