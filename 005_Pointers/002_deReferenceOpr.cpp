#include<iostream>
using namespace std;

int main(){

    int a = 10;

    int *ptr = &a;
    cout << "Address : " << ptr << endl;

    cout << "Value using *ptr : " << *ptr << endl;

    *ptr += 100;
    cout << "Value after Adding 100 with *ptr using a : " << a << endl;



    return 0;
}