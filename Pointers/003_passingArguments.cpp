#include<iostream>
using namespace std;


//Pass By Value ---- 1

void changeA(int a){
    a = 20;
    cout  << a << endl;
}

//Pass By Reference using Pointer ---- 2

void changeB(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}


int main(){

    // 1
    int a = 10;
    changeA(a);

    cout << a << endl;  


    cout << " -------------------- " << endl;

    // 2
    int b = 10;
    changeB(&b);

    cout << b << endl;

    return 0;
}