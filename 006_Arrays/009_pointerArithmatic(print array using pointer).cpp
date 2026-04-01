#include<iostream>
using namespace std;

//print array elements using Pointer

void printArray(int *ptr, int n){
    for(int i=0; i<n; i++){
        //Way 1
        // cout << *ptr << endl;
        // ptr++;

        //Way 2
        cout << (*ptr + i) << endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);

    return 0;
}
