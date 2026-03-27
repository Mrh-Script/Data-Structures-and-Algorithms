#include<iostream>
using namespace std;

int main(){

    int array[5] = {1,2,3,4,5};
    int a = sizeof(array);    // total size

    int length = sizeof(array)/sizeof(int);


    cout << "Size of Array : " << a << endl;  
    cout << "Length of the Array : " << length << endl;


    return 0;
}