#include<iostream>
using namespace std;

void checkDuplicate(int *nums, int n){
    bool found = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(found){
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}

int main(){

    int nums[] = {1, 2, 3, 4};
    int nums2[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    int n = sizeof(nums) / sizeof(int);
    int n2 = sizeof(nums2) / sizeof(int);

    cout << "Array 1 : ";
    checkDuplicate(nums, n);

    cout << "Array 2 : ";
    checkDuplicate(nums2, n2);


    return 0;
}