#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int fact = 1;
    if(n==0){
        cout<<n<<"! = "<< fact <<endl;
    }
    else{
        for(int i=n; i>=1; i--){
        fact *= i;
        }
        cout<<n<<"! = "<< fact << endl;
    }   
}