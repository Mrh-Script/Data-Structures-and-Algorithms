#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout << "Sorted Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        // loop for find min
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    printArray(arr, n);
}

int main(){

    int array[] = {5, 4, 1, 3, 2};
    int n = sizeof(array) / sizeof(int);

    selectionSort(array, n);

    return 0;
}