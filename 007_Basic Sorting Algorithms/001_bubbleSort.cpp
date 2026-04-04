#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout << "Sorted Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){

    bool alreadySorted = true;

    for(int i=0; i<n-1; i++){

        bool isSwap = false;

        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(i == 0 && isSwap){
            alreadySorted = false;
        }

        if(!isSwap){
            break;
        }
    }

    if(alreadySorted){
        cout << "Array is already sorted!" << endl;
    }

    printArray(arr, n);
}

int main(){
    int array[] = {6, 5, 1, 4, 2, 3};
    int n = sizeof(array) / sizeof(int);

    bubbleSort(array, n);

    return 0;
}