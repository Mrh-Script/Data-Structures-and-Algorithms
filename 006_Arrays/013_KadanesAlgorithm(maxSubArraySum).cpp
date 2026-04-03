#include<iostream>
using namespace std;

void maxSubArraySum(int *arr, int n){
    int currentSum = 0;
    int maxSum = INT8_MIN;

    for(int i=0; i<n; i++){       // only loop = TC : O(n)
        currentSum += arr[i];
        maxSum = max(maxSum , currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Maximum Sub Array Sum : " << maxSum << endl;
}

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArraySum(arr, n);

    return 0;
}

// Best approach of define the Maximum Sub Array Sum
// TC : O(n)  : one loop only