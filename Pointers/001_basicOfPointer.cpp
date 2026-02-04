#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;  // ptr = pointer
    int **pptr = &ptr;  // pointers of pointers

    cout << &a << " = " << ptr << endl;
    cout << "SIze of a Pointer : " << sizeof(ptr) << endl;
    cout << &ptr << " = " << pptr << endl;

    return 0;
}