#include<iostream>
using namespace std;

// Only applicable for SORTED** Array

int binarySearch(int *arr, int n, int key){
    int st = 0, end = n-1;
    
    while(st <= end){
        int mid = (st + end) / 2;

        if(arr[mid] == key){
            return mid;  //key found
        }
        else if(arr[mid] < key){  // 2nd Half
            st = mid + 1;
        }
        else{ //1st Half
            end = mid - 1;
        }
    }
    return -1; // If key not found
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};  // Sorted Array
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout << "Enter a key number you want to find : ";
    cin >> key;

    cout << endl;

    int result = binarySearch(arr, n, key);

    if(result == -1){
        cout << "The key " << key << " is not found!"<< endl;
    }
    else{
        cout << "The key : " << key << " is found! \nIt insists in index : " << result << endl;
    }

    return 0;
}