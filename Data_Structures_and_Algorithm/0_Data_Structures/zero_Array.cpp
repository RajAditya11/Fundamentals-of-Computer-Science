#include<iostream>
#include<vector>

using namespace std;

int total( vector<int>& arr ){
    int totalSum = 0;
    for( int i = 0 ; i < arr.size() ; i++ ){
        totalSum += arr[i];
    }
    return totalSum;
}

int totalSums( int arr[] , int size ){
    int totalSum = 0;
    for( int i = 0 ; i < size ; i++ ){
        totalSum += arr[i];
    }
    return totalSum;
}

int main(){

    //Initialize array DS.
    int array[10] = { 12 ,13 , 14 , 15 }; 
    vector<int> arr;

    total(arr);
    totalSums( array , 4);

    return 0;
}