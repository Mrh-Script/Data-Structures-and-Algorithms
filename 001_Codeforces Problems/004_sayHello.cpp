#include<iostream>
using namespace std;

void sayHello(string name){
    cout << "Hello, " << name;
}

int main(){
    string name;
    cin>>name;

    sayHello(name);
    return 0;
}