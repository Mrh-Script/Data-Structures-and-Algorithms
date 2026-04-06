#include <iostream>
#include <algorithm> // CRITICAL: Required for sort()
#include <functional> // Optional: Required for greater<int>() in some compilers
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    // Ascending Order
    // Formula : sort(start, end)
    // start = *arr   and end = arr + n  (arr[n])



    // Descending Order
    // Formula : sort(start, end, greater<int>())
    // start = *arr   and end = arr + n  (arr[n])

    int arr1[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int arr2[] = {1, 4, 1, 3, 2, 4, 3, 7};


    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);


    sort(arr1, arr1 + n1);
    cout << "Asecnding Order : ";
    printArray(arr1, n1);

    sort(arr2, arr2 + n2, greater<int>());
    cout << "Descending Order : ";
    printArray(arr2, n2);



    return 0;
}

// TC : O(n logn);