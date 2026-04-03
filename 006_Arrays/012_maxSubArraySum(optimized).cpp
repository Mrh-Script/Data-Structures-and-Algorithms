#include<iostream>
using namespace std;

// Brute Force Approach

void maxSubArraySum2(int *arr, int n){
    int maxSum =  INT64_MIN;   // Must be; INT_MIN means to the negative infinity value

    cout << "Possible SubArray Sum Values : " << endl;
    
    for(int start=0; start<n; start++){
        int currentSum = 0;                   // changes applied here to reduce a loop
        for(int end=start; end<n; end++){
            currentSum += arr[end];
            cout << currentSum << ", ";
            maxSum = max(maxSum, currentSum);
        }
        cout << endl;
    }
    cout << "\nMaximun SubArray Sum = " << maxSum << endl;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum2(arr, n);

    return 0;
}

// Time Complrxity (TC) = O(n^2);

// INT_MIN = negative infinity
// INT_MAX = positive infinity 