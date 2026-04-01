#include<iostream>
using namespace std;

void printSubArrays(int *arr, int n){
    for(int start = 0; start < n; start++){    // TC : O(n)
        for(int end = start; end < n; end++){  // TC : O(n)
            for(int i = start; i <= end; i++){ // TC : O(n)
                cout << arr[i] << " ";
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    
    printSubArrays(arr, n);

    return 0;
}

// Time Complexity (TC) = O(n^3);