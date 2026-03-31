#include<iostream>
using namespace std;

// Using without extra space **
// SC: O(1) and TC: O(n)   || Space Complexity ,  Time Complexity

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << "   ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n-1;

    while(start < end){
        //swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //can also use in-built function of swaping : swap(arr[start], arr[end]);
        //swap(arr[start], arr[end]);

        start++;
        end--;
    }

    printArr(arr, n);

    return 0;
}